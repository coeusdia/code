#include<stdio.h>
#include<windows.h>

int main()
{
    //“\”作为转义字符       \32为8进制32代表的ASCII码值
    printf("C:\program\test\328\n");//输出结果为   C:program       est8
    printf("C:\\program\\test\\328\n");//输出结果为    C:\program\test\328     
    printf("%d\n",strlen("C:\program\test\328\n"));//输出结果为16
    //      \p，\t，\n为1个长度，\328为两个长度（\32和8）
    system("pause");
    return 0;
}