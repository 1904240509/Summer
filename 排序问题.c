//将四个整数进行从小到大的顺序排列,

#include<stdio.h>
#define xx 4
int main()
{
    int a[xx];
    int b;
    int i,j;
  
    for(i=0;i<xx;i++)
    {
        scanf("%d",&a[i]);    //输入
    }
  
    for(j=0;j<xx;j++)        //  冒泡次数
    {
        for(i=0;i<xx-1;i++)    //第一次冒泡，xx-1为下标，如不减1，a[i+1]有可能等于a[4]，a[4]为无效数。
        {
            if(a[i]>a[i+1])
            {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
            }  
        }
    }
  
    for(i=0;i<xx;i++)   //输出
    {
        printf("%d ",a[i]);
    }printf("\n");
  
    return 0;
}

