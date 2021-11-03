#include<stdio.h>
#include<windows.h>

int main()
{
    int arr[5]={1,2,3,4,5};//每个元素存在下标，从0递增
    char ch[5]={1,2,3};//不完全初始化，剩余默认为0
    int i=0;
    while(i<4)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    system("pause");
    return 0;
}