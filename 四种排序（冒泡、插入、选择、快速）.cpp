//冒泡排序

for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]<a[j+1])
		{
			buf=a[j];
			a[j]=a[j+1];
			a[j+1]=buf;
		}
	}
}

//选择排序

for(i=0;i<n-1;i++)//每次从未排序的部分选出一个最小的元素，最后一次只剩下一个元素未排序 
{                 //此时实际上已经排好序，故只需要N-1次外层大循环 
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	 } 
	 if(min!=i){
	 	temp=a[i];
	 	a[i]=a[min];
	 	a[min]=temp;
	 }
 } 
 
 //插入排序
 
 for(i=1;i<n;i++)
 {
 	cur=num[i];  //待排序元素
	for(j=i-1;j>=0&&num[j]>cur;j--)
	{
		num[j+1]=num[j];
	}
	num[j+1]=cur; 
  } 
 
//快速排序

#include<stdio.h>
#include<stdlib.h>

void swap(int*first,int*second)
{
	int temp=*first;
	*first=*second;
	*second=temp;
}

void quick_sort(int*arr,int l,int r)
{
	if(l>r)
	    return;
	int x=arr[l],i=l-1;j=r+1;
	while(i<j)
	{
		do i++;while(arr[i]<x);
		do j--;while(arr[j]>x);
		if(i<j)
		{
			swap(&arr[i],&arr[j]);
		}
	}
	quick_sort(arr,l,j);
	quick_sort(arr,j+1;r)
}

int main()
{
	int i;
	int n;
	int *array;
	printf("请输入数组的大小：");
	scanf("%d",&n);
	array=(int*)malloc(sizeof(int)*(n+1));//第一个元素用来保存中间变量
	printf("请输入数据（用空格分隔)":);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&array[i]);
	 } 
	 quick_sort(array,0,n-1);
	 printf("排序后为：");
	 for(i=0;i<=n-1;i++)
	 {
	 	printf("%d",array[i]);
	 }
	 printf("\n");
 } 
