#include<stdio.h>
#include<windows.h>
#define myj 666

enum Species
{
	GOD=5,//����ֵ��Ĭ�ϳ�ֵΪ0
	HUMAN,
	COEUS,
};
int main()
{
	3.14;//���㳣��
	10;//���γ���
	'a';//�ַ�����
	"coeus";//�ַ�������
	enum Species c=COEUS;
	printf("%d\n",c);//������Ϊ7
	printf("%d\n",HUMAN);//������Ϊ6
	printf("%d\n",GOD);//������Ϊ5
	
	const int a=10;
	printf("a=%d\n",a);
	system("pause");
	return 0;
}