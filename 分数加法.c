//给你2个分数，求他们的和，并要求和为最简形式。
//输入首先包含一个正整数T（T<=1000），表示有T组测试数据，然后是T行数据，每行包含四个正整数a,b,c,d（0<a,b,c,d<1000），表示两个分数a/b 和 c/d。
//对于每组测试数据，输出两个整数e和f，表示a/b + c/d的最简化结果是e/f，每组输出占一行。
#include <stdio.h>
int get_gcd(int a,int b);
int main(){
    int T;
    int a;
    int b;
    int c;
    int d;
    int lcm;
    int temp;
    int gcd;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        lcm=b*d/get_gcd(b,d);
        
        temp=(lcm/b*a+lcm/d*c);
        gcd=get_gcd(temp,lcm);
        
        printf("%d %d\n",temp/gcd,lcm/gcd);    
    }        
    return 0;
}
int get_gcd(int a,int b){
    int temp;
    int remainder;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b){
        remainder=a%b;
        a=b;
        b=remainder;
    }
    return b;
}
