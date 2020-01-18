#include<iostream>
using namespace std;
//int num(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	printf("%d",num(a));
//	system("pause");
//}
bool num(int x)
{
	int count = 0;
	while (x)
	{
		if (count > 1)
			return false;
		count++;
		x = x&(x - 1);
	}
	return true;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (num(a))
		printf("ÊÇ");
	else printf("·ñ");
	system("pause");
}