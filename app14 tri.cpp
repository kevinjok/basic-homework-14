#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("�п�J�Ʀr");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<c)
	{
		printf("���i�զ��T����");
	}
	else if(a+c<b)
	{
		printf("���i�զ��T����");
	}
	else if(b+c<a)
	{
		printf("���i�զ��T����");
	}

	else
	{
		printf("�i�զ��T����");
	}
}
