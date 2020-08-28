//现在给你一个16进制的加减法的表达式，要求用8进制输出表达式的结果。
//第一行输入一个正整数T（0<T<100000）
//接下来有T行，每行输入一个字符串s（长度小于15)字符串中有两个数和一个加号或者一个减号，且表达式合法并且所有运算的数都小于31位
//每个表达式输出占一行，输出表达式8进制的结果。
#include <stdio.h>
int main(){
    int a;
    int b;
    int sum;
    int T;
    char c; 
    scanf("%d",&T);
    while(T--){
        scanf("%x%c%x",&a,&c,&b);
        if(c=='+')
            sum=a+b;   
        else
            sum=a-b;         
        if(sum<0){   //只有当sum为__int64类型时，才要进行正负的判断
            sum=-sum;
            printf("-");
        }       
        printf("%o\n",sum);
    }  
    return 0;
}
