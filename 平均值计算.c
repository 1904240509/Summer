#include<stdio.h>
int main()
{
    int a[10],count=0,i,sum=0,mean;
    for(i=0;i<=9;i++) scanf("%d",&a[i]);
    for(i=0;i<=9;i++){
        sum+=a[i];
    }
    mean=sum/10;
    for(i=0;i<=9;i++){
        if(a[i]>mean) count++;
    }
    printf("%d",count);
}
