#include<windows.h>
#include<stdio.h>

int main()
{
    int input;
    printf("����1����0\n");
    printf("��������Ĵ�>:");
    scanf("%d",&input);
    if(input==1)
    {
        printf("����1");
    }    
    else
    {
        printf("����0");
    }
    system("pause");
    return 0;
}