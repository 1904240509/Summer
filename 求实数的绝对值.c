//输入数据有多组，每组占一行，每行包含一个实数。
//对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
#include <stdio.h>
 
int main(){
    double number;
     
    while((scanf("%lf",&number)!=EOF)){
        if(number<0)
            number=-number;
             
        printf("%.2lf\n",number);
    }
    return 0;
}
