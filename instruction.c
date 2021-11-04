#include<stdio.h>
#include<windows.h>

int main()
{
    int a=9/2;
    printf("%d\n",a);//输出结果为4
    float b=9/2;
    printf("%f\n",b);//进行整型运算，输出结果为4.000000
    float c=9/2.0;
    printf("%f\n",c);//进行浮点型运算，输出结果为4.500000

    int rig=2;
    int lef=rig<<1;//对rig的二进制数字左移一位  10→100   
    printf("%d\n",lef);//输出结果为4

    int d=0;
    //!作用将真变为假，将假变为真
    //0表示假 非0表示真，默认真为1
    printf("%d\n",!d);//输出为1
    printf("%d\n",~d);//输出为-1

    int x=10;
    int y=x++;//后置++，先使用，后自增
    printf("%d\n",x);//输出结果为11
    printf("%d\n",y);//输出结果为10

    int j=3;
    int k=6;
    int max=0;
    max=j>k ? j : k;//取出a，b中的较大值
    printf("%d\n",max);//输出结果为6

    int m=0;
    int n=5;
    int p=6;
    //     m=6    n=-1   p=-7
    int q=(m=n+1,n=m-7,p=n-m);
    //逗号表达式从左向右依次计算
    //表达的结果为最后一个表达式的结果
    printf("%d\n",q);//输出结果为-7
    system("pause");
    return 0;
}