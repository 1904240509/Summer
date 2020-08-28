//给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
//输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
//对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。你可以认为32位整数足以保存结果。
#include <stdio.h>
int main(){
    int a;
    int b;
    int i;
    int temp;
    int oushu_sum;
    int jishu_sum;
     
    while((scanf("%d%d",&a,&b))!=EOF){
        oushu_sum=0;
        jishu_sum=0;
         
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
         
        for(i=a;i<=b;i++){
            if(i%2==0){
                oushu_sum+=(i*i);
            }
             
            else
                jishu_sum+=(i*i*i);
        }
         
        printf("%d %d\n",oushu_sum,jishu_sum);
    }
    return 0;
}
