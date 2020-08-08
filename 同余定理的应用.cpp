 /* 两个整数a、b，若它们除以整数m所得的余数相等，则称a与b对于模m同余或a同余于b模m。
 记作：a≡b (mod m)，
 读作：a同余于b模m，或读作a与b对模m同余，例如         26≡2(mod 12)。  */


//题目：求2001的2003次方除以13的余数
 
#include<stdio.h>
#include<math.h>
 
#define Max 100

void function(int x,int num,int m)
{
	int i = 0,r=0,a[Max];
	while(1)
	{
		r = (int)(pow(x,i+1)) % m;
		a[i] = r;
		i++;
		if(r == 1)
			break;
	}
	printf("%d 的 %d 次幂模 %d 的余数为：%d\n",x,num,m,a[num % i -1]);
} 
  
int main()
{
	int x,num,m;
	
	printf("请输入x的num次幂：");
	scanf("%d%d",&x,&num);
	printf("请输入模：");
	scanf("%d",&m);
 
	function(x,num,m);
 
	return 0;
}
