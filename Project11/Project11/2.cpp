#include<iostream>
#include<vector>
#include<string>
using namespace std;

//DFS
bool HaveStr(string& s, int num, vector<vector<char>>& ans, int x, int y, vector<vector<int>>& tmp){
	if (num == s.size()-1)//当递归到走完单词的时候说明结束，就返回true
		return true;
	int a[4][4] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };//向上下左右移动判断
	for (int i = 0; i < 4; i++){
		int m = x + a[i][0];
		int n = y + a[i][1];
		if (m < 0 || m >= ans.size() || n < 0 || n >= ans[0].size())
			continue;
		if (tmp[m][n] == 0 && s[num + 1] == ans[m][n])//如果该位置还没有被走，并且与单词对应的字母相同就递归
		{
			tmp[m][n] = 1;
			return HaveStr(s, num + 1, ans, m, n, tmp);
		}
	}
	return false;//遍历之后没有正确答案则返回
}
int main(){
	string str;
	cin >> str;
	vector<vector<char>> ans;//二维表格
	ans = { { 'A', 'B','C','E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[0].size(); j++){//遍历表格找第一个相同的字母
			if (str[0] == ans[i][j]){//找到字母
				vector<vector<int>> tmp(ans.size(), vector<int>(ans[0].size(), 0));
				tmp[i][j] = 1;
				bool flag=HaveStr(str, 0, ans, i, j, tmp);//判断是否否合条件
				if (flag == true)//符合就输出true，并退出程序。
				{
					cout << "true" << endl;
					return 0;
				}
			}
		}
	}
	cout << "false" << endl;//不符合条件就输出false
	system("pause");
	return 0;
}