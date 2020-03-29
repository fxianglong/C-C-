#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
char* My_strcat(char* parr1,const char* parr2)
{
	char *arr = parr1;
	assert(parr1&&parr2);
	while(*parr1 != 0)
	{
		parr1++;
	}
	while(*parr1++ = *parr2++);
	return arr;
}
int main()
{
	char arr1[20] = "ABCD";
	char arr2[] = "EFG";
	printf("%s\n",My_strcat(arr1,arr2));
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	system("pause");
	return 0;

}
