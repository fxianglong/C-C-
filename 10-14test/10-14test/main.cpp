#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<easyx.h>
#pragma warning(disable: 4996)

int main(){
	const float PI = 3.1415926;
	int width = 800;
	int height = 600;
	initgraph(width, height);
	setbkcolor(RGB(255, 255, 255));
	setlinestyle(PS_SOLID, 3);

	float lineLength = 160;
	float xEnd, yEnd;
	float rotateSpeed = PI / 360;
	int lineNum = 0;
	float Angel[1000];
	int score = 0;
	int i;
	BeginBatchDraw();//开始批量绘制

	while (1){
		cleardevice();//以背景色清空背景
		setlinecolor(RGB(0, 0, 0));//设置针颜色为黑色
		line(0, height / 2, lineLength,height/2 );//左边发射区域的一根针

		for (i = 0; i < lineNum; i++){
			Angel[i] += rotateSpeed;//角度增加
			if (Angel[i]>2 * PI){//如果角度大于2*PI需要进行减运算，是的角度在有限的范围内
				Angel[i] -= 2 * PI;
			}
			xEnd = lineLength*cos(-Angel[i]) + width / 2;
			yEnd = lineLength*sin(-Angel[i]) + height / 2;
			setlinecolor(RGB(0, 0, 255));//设定旋转针的颜色为蓝色
			if (i == lineNum - 1)//最新发射的一针设置为红色
				setlinecolor(RGB(255, 0, 0));
			line(width / 2, height / 2, xEnd, yEnd);
		}
		if (kbhit() && rotateSpeed != 0){
			char input = _getch();//获取用户按键输入
			if (input == ' '){
				lineNum++;
				Angel[lineNum - 1] = PI;
				xEnd = lineLength*cos(-Angel[lineNum - 1]) + width / 2;
				yEnd = lineLength*sin(-Angel[lineNum - 1]) + height / 2;
				line(width / 2, height / 2, xEnd, yEnd);
				for (i = 0; i < lineNum-1; i++){
					if (abs(Angel[lineNum - 1] - Angel[i]) < PI / 60){
						rotateSpeed = 0;
						break;
					}
				}
				score += 1;
			}
		}
		setfillcolor(HSVtoRGB(0, lineNum / 60.0, 0.8));//绘制中间圆盘，针越多颜色越鲜艳
		setlinecolor(HSVtoRGB(0, 0.9, 0.8));
		fillcircle(width / 2, height / 2, 60);
		TCHAR s[20];
		_stprintf(s, _T("%d"), score);
		settextstyle(50, 0, _T("Times"));
		settextcolor(RGB(50, 50, 50));
		outtextxy(65, 200, s);

		FlushBatchDraw();//批量绘制
		Sleep(10);
	}
	closegraph();
	system("pause");
	return 0;
}