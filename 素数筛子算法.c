//现在给你一个正整数N，要你快速的找出在2.....N这些数里面所有的素数。
//给出一个正整数数N(N<=2000000)、但N为0时结束程序。、测试数据不超过100组
//将2~N范围内所有的素数输出。两个数之间用空格隔开
#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 2000001
  
int main(){
    int i;
    int j;
    char flag[N];
    memset(flag,'0',N);//memset是把flag中所有字节换做字符'0'，常用来对指针或字符串的初始化。
    flag[0]='1'; 
    flag[1]='1';
  
    for(i=2;i<=sqrt(N);i++){//求出素数，是素数flag=1，不是素数flag=0. 
        if(flag[i]=='0'){
            for(j=i*i;j<N;j+=i){
                flag[j]='1';
            }
        }
    }
  
    int number;
      
    while(1){
        scanf("%d",&number);
  
        if(number==0)
            break;
  
        for(i=2;i<=number;i++){
            if(flag[i]=='0')
                printf("%d ",i);
        }
              
        printf("\n");
    }
  
    return 0;
}
