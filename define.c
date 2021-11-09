#include<stdio.h>
#include<windows.h>
#define ADD(X,Y) ((X)+(Y))
int main()
{
    //            4*(2+3)=11
    printf("%d\n",4*ADD(2,3));//结果为20
    system("pause");
    return 0;
}