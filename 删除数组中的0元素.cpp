/*删除数组中的0元素
编写函数CompactIntegers，删除数组中所有值为0的元素，其后元素向数组首端移动。注意，CompactIntegers函数需要接收数组及其元素个数作为参数，函数返回值应为删除操作执行后数组的新元素个数。 
输入时首先读入数组长度，再依次读入每个元素。 
将调用此函数后得到的数组和函数返回值输出。*/ 

#include<stdio.h>
void  CompactIntegers(int a[],int x); 
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];     //定义一个n个元素的数组  
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    CompactIntegers(array,n);
    return 0;
}
void  CompactIntegers(int a[],int x)
{
    int i,cnt=0;
    for(i=0;i<x;i++)
        if(a[i])        //元素为1的数组才输出并且计数变量加1； 
        { 
            printf("%d ",a[i]);
            cnt++; 
        }
    printf("\n%d\n",cnt);    
}
