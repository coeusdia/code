#include<stdio.h>
#include<windows.h>

int main()
{
    int a=0;
    while(a<100)
    {
        printf("正在加载%d\n",a);
        a++;
    }
    if(a==100)
    {
        printf("加载失败\n");
    }
    system("pause");
    return 0;
}