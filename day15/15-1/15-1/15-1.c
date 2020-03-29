#include<stdio.h>
#include<stdlib.h>
void find_num(int a[],int sz)
{
	int i = 0;
	int pos = 0;
	int ret = 0;
	int x = 0,y = 0;
	for(i = 0;i < sz;i++)
	{
		ret ^= a[i]; 
	}
	for(i = 0;i<32;i++)
	{
		if(1 == ((ret >> 1)&1))
		{
			pos = i;break;
		}
	}
	for(i = 0;i < sz;i++)
	{
		if(1 == ((a[i] >> pos)&1))
			x ^= a[i];
		if(0 == ((a[i] >> pos)&1))
			y ^=a[i];
	}
	printf("%d,%d",x,y);
}
int main()
{
	int a[]={1,2,3,4,5,3,2,1};
	int sz = sizeof(a)/sizeof(a[0]);
	find_num(a,sz);
	system("pause");
	return 0;
}