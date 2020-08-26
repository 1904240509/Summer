//输入三个数，比较其大小，并从大到小输出。

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        swap(&a,&b);
    if(b>c)
        swap(&b,&c);
    if(a>c)
        swap(&a,&c);
    printf("%d %d %d",c,b,a);
    return 0;
}
int swap(int *a,int *b){
    int p;
    p=*a;
    *a=*b;
    *b=p;
}

