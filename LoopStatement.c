#include<stdio.h>
#include<windows.h>

int main()
{
    int a=0;
    while(a<100)
    {
        printf("���ڼ���%d\n",a);
        a++;
    }
    if(a==100)
    {
        printf("����ʧ��\n");
    }
    system("pause");
    return 0;
}