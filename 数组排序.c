//输入一个数组的值,求出各个值从小到大排序后的次序。

include<stdio.h>
include<string.h>
include<math.h>
sort(int a[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++) for(j=0;j<n-1-i;j++) { if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}

int main()
{
int n;
int i,j;
int t,num,k;
int a[1000],b[1000];
while(scanf(“%d”,&n)==1)
{
num=0;
for(i=0;i<n;i++)
{
scanf(“%d”,&a[i]);
b[i]=a[i];
}
sort(a,n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(b[i]==a[j]) { if(num!=0) printf(“ “); printf(“%d”,j+1);num++;break;};
printf(“\n”);
}

return 0;

}
