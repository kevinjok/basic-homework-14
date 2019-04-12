#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("請輸入數字");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<c)
	{
		printf("不可組成三角形");
	}
	else if(a+c<b)
	{
		printf("不可組成三角形");
	}
	else if(b+c<a)
	{
		printf("不可組成三角形");
	}

	else
	{
		printf("可組成三角形");
	}
}
