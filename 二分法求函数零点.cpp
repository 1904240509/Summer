/*有函数：
f(x) = x5 - 15 * x4+ 85 * x3- 225 * x2+ 274 * x - 121
已知 f(1.5) > 0 , f(2.4) < 0 且方程 f(x) = 0 在区间 [1.5,2.4] 有且只有一个根，请用二分法求出该根
输出:
该方程在区间[1.5,2.4]中的根。要求四舍五入到小数点后6位。*/

#include<stdio.h>
#include<math.h>
double f(double x);
void search(double a,double b);
int main(void)
{
	search(1.5,2.4);
}

double f(double x)
{
	return pow(x,5)-15*pow(x,4)+85*pow(x,3)-225*x*x+274*x-121;
}

void search(double a,double b)
{
	double middle,result;
	middle=(a+b)/2;
	result=f(middle);
	if(result>0.000001)
	    search(middle,b);
	else if(result<-0.000001)
	    search(a,middle);
	else
	    printf("%.6lf",middle);
}
