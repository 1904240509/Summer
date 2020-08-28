//现在要求输出所有在m和n范围内的水仙花数。
//输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。
//对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
//如果给定的范围内不存在水仙花数，则输出no;
//每个测试实例的输出占一行。
#include <stdio.h>
int main(){
    int a;
    int b;
    int temp;
    int i;
     
    int number1;
    int number2;
    int number3;
    int flag;
     
    while((scanf("%d%d",&a,&b))!=EOF){
        flag=0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
         
        for(i=a;i<=b;i++){
            number1=i%10;
            number2=i/10%10;
            number3=i/100;
             
            if(i==(number1*number1*number1+number2*number2*number2+number3*number3*number3)){
                if(flag==0)
                    printf("%d",i);
                     
                else
                    printf(" %d",i);
                flag=1;
            }
        }
         
        if(flag==0)
            printf("no");
             
        printf("\n");
    }
     
    return 0;
}
