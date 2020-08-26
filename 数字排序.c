//输入三个整数，按由小到大的顺序输出。

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d %d\n",(a<b?a:b)<c?(a<b?a:b):c,
        a<b?(a>c?a:(c<b?c:b)):(a<c?a:(b>c?b:c)),
        (a>b?a:b)>c?(a>b?a:b):c);
    return 0;
}
