#include<stdio.h>
#include<windows.h>
typedef unsigned int u_int;//将类型重命名

void text()
{
    static int a=1;
    a++;
    printf("%d\n",a);
}

int main()
{
    unsigned int num1=100;
    //两种代码意义相同
    u_int num2=100;    
    printf("%d\n%d\n",num1,num2);

    int i=0;
    while(i<10)
    {
        text();//输出结果为2到11
        i++;
    }
    system("pause");
    return 0;
}