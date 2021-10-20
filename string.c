#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
    "chat";//字符串（string）
    "ab";

    //字符数组：数组是一组相同类型的元素
    char arr[]="hello";//字符串后有隐藏的 \0 因此方括号中的值为6

    char arr1[]="nb";//隐藏的停止符号“\0”，输出正常
    char arr2[]={'n','b'};//没有停止符号，输出乱码
    char arr3[]={'n','b','\0'};//输入了停止符号输出正常
    printf("%d\n",strlen(arr1));//输出为2
    printf("%d\n",strlen(arr2));//没有停止符号，输出为随机值
    printf("%d\n",strlen(arr3));//输出为2
    
    printf("%s\n",arr1);//打印数组使用 %s
    printf("%s\n",arr2);
    printf("%s\n",arr3);
    
    int len=strlen("fuck");
    printf("%d\n",len);//输出结果为4，隐藏的\0不算在长度中
    system("pause");
    return 0;
}