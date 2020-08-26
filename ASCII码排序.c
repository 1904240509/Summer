//输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//第一行输入一个数N,表示有N组测试数据。后面的N行输入多组数据，每组输入数据都是占一行，有三个字符组成，之间无空格。
//对于每组输入数据，输出一行，字符中间用一个空格分开。
#include <stdio.h>
int main(){
    char a;
    char b;
    char c;
    char temp;
    int T;
    
    scanf("%d",&T);
    getchar();
    
    while(T--){
        scanf("%c%c%c",&a,&b,&c);
        getchar();
        
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        
        if(a>c){
            temp=a;
            a=c;
            c=temp;
        }
        
        if(b>c){
            temp=b;
            b=c;
            c=temp;
        }
        
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
