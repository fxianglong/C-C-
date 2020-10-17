#include<iostream>
using namespace std;
int mon[12] = { 0, 30, 57, 87, 116, 146, 175, 205, 233, 264, 294, 323 };
bool IsleapYear(int y){
	return (y % 100 != 0 && y % 4 == 0) || (y % 400 == 0);
}
int cal(int y, int m, int d)
{
	return y * 365 + y / 4 - y / 100 + y / 400 + mon[m - 1] + d - 1 + (y / 100 != 0 && y / 4 == 0 || y / 400 == 0 && m>2);
}
int main()
{
	int x[2], year, month, day;
	int week;
	int y[2],m[2];
	for (int k = 0; k<2; k++)//循环两次读入两个日期
	{
		cin>>year>>month>>day;
		if (k == 0)
			cin >> week;
		x[k] = cal(year, month, day);
		y[k] = year;
		m[k] = month;
	}
	int count = abs(x[0] - x[1]);
	while (y[1]<y[2])
	{
		if (IsleapYear(y[1]))
			count++;
		y[1]++;
	}
	if (IsleapYear(y[1])&&m[2]>2&&m[1]<=2){
		count++;
	}
	int res = count % 7;
	if (res+week>7)
		cout << (res+week)%7 << endl;
	else
	{
		cout << res+week << endl;
	}
	system("pause");
	return 0;
}