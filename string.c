#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
    "chat";//�ַ�����string��
    "ab";

    //�ַ����飺������һ����ͬ���͵�Ԫ��
    char arr[]="hello";//�ַ����������ص� \0 ��˷������е�ֵΪ6

    char arr1[]="nb";//���ص�ֹͣ���š�\0�����������
    char arr2[]={'n','b'};//û��ֹͣ���ţ��������
    char arr3[]={'n','b','\0'};//������ֹͣ�����������
    printf("%d\n",strlen(arr1));//���Ϊ2
    printf("%d\n",strlen(arr2));//û��ֹͣ���ţ����Ϊ���ֵ
    printf("%d\n",strlen(arr3));//���Ϊ2
    
    printf("%s\n",arr1);//��ӡ����ʹ�� %s
    printf("%s\n",arr2);
    printf("%s\n",arr3);
    
    int len=strlen("fuck");
    printf("%d\n",len);//������Ϊ4�����ص�\0�����ڳ�����
    system("pause");
    return 0;
}