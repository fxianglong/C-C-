#include<stdio.h>
#include<stdlib.h>
int main()
{
    int total = 20;  
    int kps = 0;     
    int sy = 0 ;     
       kps = 20;
    while(kps>=1)
    {
        kps = kps+sy;
        total = total+kps/2;
        sy = kps%2;
        kps=kps/2;
    }
    printf("total = %d\n",total);
    system("pause");
    return 0;
}