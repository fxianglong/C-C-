//#include<stdio.h>
//#include<stdlib.h>
//int reverse(int x){
//	long i = 0, j = 0;
//	while (1)
//	{
//		i = x % 10;
//		j = j * 10 + i;
//		x = x / 10;
//		if (x == 0)
//			return j;
//	}
//	return 0;
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	printf("%d", reverse(x));
//	system("pause");
//}
#include<stdio.h>
#include<stdlib.h>
bool isPalindrome(int x){
	long long int j = 0;
	if (x<0) return false;
	int less = x;
	while (less)
	{
		j = j * 10 + less % 10;
		less /= 10;
	}
	return (x == j);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (isPalindrome(a))
		printf("1");
	else printf("0");
	system("pause");
}