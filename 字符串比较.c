//独立实现标准字符串库的strcmp函数，即字符串比较函数，从键盘输入两个字符串，按字典序比较大小，前者大于后者输出1，前者小于后者输出-1，两者相等输出0。 

#include<stdio.h>
#include<string.h>
int strcmp_(char *st1,char *st2);
int main()
{
    char A[100],B[100];
    while(scanf("%s %s",A,B)!=EOF)
    {
        int Num=strcmp_(A,B);
        if(Num>0)
            printf("1\n");
        else
            if(Num<0)
            printf("-1\n");
        else
            printf("0\n");
    }
    return 0;
}
/*****************************************/
int strcmp_(char *st1,char *st2)
{
    for(int i=0;i<strlen(st1)&&i<strlen(st2);i++)
        if(st1[i]!=st2[i])
            return st1[i]-st2[i];
    return strlen(st1)-strlen(st2);
}
