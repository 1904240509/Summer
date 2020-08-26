//输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
//90~100为A;
//80~89为B;
//70~79为C;
//60~69为D;
//0~59为E;
#include <stdio.h> 
int main(){
    int T;
    int n;
    char c;
    
    scanf("%d",&T);
    
    while(T--){
        scanf("%d",&n);
        
        if(n>=90)
            c='A';
            
        else if(n>=80)
            c='B';
            
        else if(n>=70)
            c='C';
            
        else if(n>=60)
            c='D';
            
        else
            c='E';
            
        printf("%c\n",c);
    } 
    return 0;
}
