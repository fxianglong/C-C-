#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int judge(char* str1,char* str2)
{
	int i = 0;
	int j = 0;
	int lenght = strlen(str1);
	for (i = 0; i < lenght - 1; i++)
	{
		int tmp = str1[0];
		for (j = 0; j < lenght - 1; j++)
		{
			str1[j] = str1[j + 1];
		}
		str1[lenght - 1] = tmp;
		if (0 == strcmp(str1, str2))
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char a[100] = "AABCD";
	char b[100] = "BCDAA";
	printf("%d",judge(a,b));
	system("pause");
	return 0;
}