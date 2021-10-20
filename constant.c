#include<stdio.h>
#include<windows.h>
#define myj 666

enum Species
{
	GOD=5,//赋初值，默认初值为0
	HUMAN,
	COEUS,
};
int main()
{
	3.14;//浮点常量
	10;//整形常量
	'a';//字符常量
	"coeus";//字符串常量
	enum Species c=COEUS;
	printf("%d\n",c);//输出结果为7
	printf("%d\n",HUMAN);//输出结果为6
	printf("%d\n",GOD);//输出结果为5
	
	const int a=10;
	printf("a=%d\n",a);
	system("pause");
	return 0;
}