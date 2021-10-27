#include<windows.h>
#include<stdio.h>

int main()
{
    int input;
    printf("你是1还是0\n");
    printf("请输入你的答案>:");
    scanf("%d",&input);
    if(input==1)
    {
        printf("你是1");
    }    
    else
    {
        printf("你是0");
    }
    system("pause");
    return 0;
}