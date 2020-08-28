//多项式的描述如下：
//1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
//现在请你求出该多项式的前n项的和。
//输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，第二行包含m个正整数，对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和。
//对于每个测试实例n，要求输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数。
#include <stdio.h>
 
double get_result(int number);
 
int main(){
    int n;
    int number;
     
    scanf("%d",&n);
     
    while(n--){
        scanf("%d",&number);
         
        printf("%.2lf\n",get_result(number));
    }
     
    return 0;
}
 
double get_result(int number){
    int i;
    int temp=1;
    double result=0;
     
    for(i=1;i<=number;i++){
        result+=(1.0/i*temp);
        temp=-temp;
    }
     
    return result;
}
