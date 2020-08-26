//计算10的阶乘

#include <stdio.h>
int func(int a)
{
	static unsigned long long int c;
	if(a==0)
	{
		return 1; 
	}	
	else
	{
		c=a*func(a-1);
	}
	return (c);
}
int main()
{
	int a=10;
	unsigned long long int b;
	b=func(a);
	printf("100！的值是%d",b);
} 
