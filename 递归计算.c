//计算1+2+3+…+100

#include <stdio.h>
int func(int a)
{
	int b;
	if(a>0)
	{
		b=a+func(a-1);
	}
	return (b);
}
int main()
{
	int a=100,b;
	b=func(a);
	printf("1+2+3+...+100的值是%d",b);
}
