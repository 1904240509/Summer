//输入一元一次方法的ax+b=0的解。且数据均在double类型以内,且一定有解（保留2位小数） 

#include<stdio.h>
int main()
{
  double a,b;         // double型
    double x;
  scanf("%lf%lf",&a,&b);    //格式输入
  x=(-b)/a;                              //不懂运算顺序可以加括号
  printf("%.2lf",x);
    return 0;
}


