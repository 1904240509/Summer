//> 给定两个正整数，计算这两个数的最小公倍数。
// - 输入
//输入包含多组测试数据，每组只有一行，包括两个不大于1000的正整数.
// - 输出
//对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。
#include <stdio.h>
int get_LCM(int a,int b);//函数 
 
int main(){
    int a;
    int b;
     
    while((scanf("%d%d",&a,&b))!=EOF){
        printf("%d\n",get_LCM(a,b));
    }
     
    return 0;
}
 
int get_LCM(int a,int b){
    int temp;
    int remainder;
    int A;
    int B;
     
    A=a;
    B=b;
     
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
     
    return A*B/b;
}
