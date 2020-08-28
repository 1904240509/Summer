//字符串处理在计算机中有很多复杂的操作，但是这些复杂的操作都是由基本的字符串操作复合而成，要求编写一字符串颠倒的程序，把字符串中的字符颠倒位置。

#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],t;
    gets(a);
    int i,j,k;
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        t=a[i],a[i]=a[j],a[j]=t;
    }
    printf("%s",a);
}
