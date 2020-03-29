//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void rotate_array(char *p,int sz,int k)
//{
//  int i = 0;
//	for(i = 0;i<k;i++)
//	{
//		int tmp = p[0];int j = 0;
//		for(j=0;j<sz;j++)
//		{
//			p[j]=p[j+1];
//		}
//		p[sz-1] = tmp;
//	}
//}
//int main()
//{
//	char arr[]="ABCDEF";
//	int k = 0;int str = strlen(arr);
//	printf("旋转前顺序：>%s\n请输入旋转的位数：",arr);
//	scanf("%d",&k);
//	while((k < 1) || (k > str-1))
//	{
//		if(k == str)
//		{
//			printf("%s",arr);
//			system("pause");
//			return 0;
//		}
//		else printf("输入错误，请重新输入>");
//		scanf("%d",&k);
//	}
//	rotate_array(arr,str,k);
//	printf("%d",arr);
//	system("pause");
//	return 0;
//}
