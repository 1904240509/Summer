//输入一个英文句子，将每个单词的第一个字母改成大写字母。
//输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
//请输出按照要求改写后的英文句子。
#include <stdio.h>
#include <ctype.h>
 
int main(){
    char c;
    int flag;
     
    while((scanf("%c",&c))!=EOF){
        flag=1;
         
        while(c!='\n'){
            if(islower(c)!=0 && flag==1){
                c=toupper(c);
                flag=0;
            }
             
                 
            if(c==' ')
                flag=1;
             
            printf("%c",c);
             
            c=getchar();
        }
         
        printf("\n");
    }
    return 0;
}
