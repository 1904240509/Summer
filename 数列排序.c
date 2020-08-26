//给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200

#include<stdio.h>

int main()

{

int n,i,a[1000],k,j,t;

scanf("%d",&n);

for(i=0;i<n;i++)

scanf("%d",&a[i]);

for(i=0;i<n-1;i++)

{

k=i;

for(j=i+1;j<n;j++)

if(a[j]<a[k]) k=j;

{

t=a[i];

a[i]=a[k];

a[k]=t;

}

}

for(i=0;i<n;i++)

printf("%d ",a[i]);



}
