#include<stdio.h>
#include<windows.h>

int main()
{
    int arr[5]={1,2,3,4,5};//ÿ��Ԫ�ش����±꣬��0����
    char ch[5]={1,2,3};//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
    int i=0;
    while(i<4)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    system("pause");
    return 0;
}