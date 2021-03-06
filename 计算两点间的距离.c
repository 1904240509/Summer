//> 输入两点坐标（X1,Y1）,（X2,Y2）(0<=x1,x2,y1,y2<=1000),计算并输出两点间的距离
//第一行输入一个整数n（0<n<=1000）,表示有n组测试数据;随后每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
//对于每组输入数据，输出一行，结果保留两位小数。 

#include <stdio.h> 
#include <math.h>

int main(){
    int T;
    double a;
    double b;
    double c;
    double d;
    double distance;
    
    scanf("%d",&T);
    
    while(T--){
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        
        distance=sqrt((a-c)*(a-c)+(b-d)*(b-d));//sqrt函数 是求根号 
        
        printf("%.2lf\n",distance);
    }
    return 0;
}
