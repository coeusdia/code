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
    system("pause");
    return 0;
}