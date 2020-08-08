#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c,p,s;
	printf("请输入三角形的三边长\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	p=1.0/2*(a+b+c);  
    if(a+b>c&&b+c>a&&a+c>b){
	    s=sqrt(p*(p-a)*(p-b)*(p-c)); 
        printf("三角形的面积为：%7.2f\n",s); 
    } 
    else 
        printf("不能构成三角形\n");
 } 
