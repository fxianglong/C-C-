#include <stdio.h>
#include <assert.h>
#include<stdlib.h>
char* MyStrcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while ((*dest++ = *src++));
	return ret;
}
int main()
{
	char arr1[7] = "abcdef";
	char arr2[20] = {0};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", MyStrcpy(arr2, arr1));
	system("pause");
	return 0;
}