#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reserve(char *left, char *right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_remove(char *p, int n, int len)
{
    reserve(p, p + n - 1);
	reserve(p + n, p + len - 1);
    reserve(p, p + len - 1);
}
int main()
{
    char arr[] = "abcdef";
    int n;
    int len = strlen(arr);
    printf("��תǰ��%s\n", arr);
    printf("��ת��λ:");
    scanf("%d", &n);
    while (n < 1 || n > len - 1)//����������ת�ַ������ٽ�ֵ�жϣ��Ƿ񳬹��ַ�������
    {
        if (n == len)//��ת�ַ���Ϊ�ַ�������ʱ����ת����ַ�������תǰ���ַ���һ�£����Կ�ֱ�����
        {
            printf("%s\n", arr);
            system("pause");
            return 0;
        }
        else
        {
            printf("�����������������\n");
            scanf("%d", &n);
        }
    }
    left_remove(arr, n, len);//�������������ת�ַ��Ĺ���
    printf("��ת��%s\n", arr);
    system("pause");
    return 0;
}