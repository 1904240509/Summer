//ð������

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

//ѡ������

for(i=0;i<n-1;i++)//ÿ�δ�δ����Ĳ���ѡ��һ����С��Ԫ�أ����һ��ֻʣ��һ��Ԫ��δ���� 
{                 //��ʱʵ�����Ѿ��ź��򣬹�ֻ��ҪN-1������ѭ�� 
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
 
 //��������
 
 for(i=1;i<n;i++)
 {
 	cur=num[i];  //������Ԫ��
	for(j=i-1;j>=0&&num[j]>cur;j--)
	{
		num[j+1]=num[j];
	}
	num[j+1]=cur; 
  } 
 
//��������

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
	printf("����������Ĵ�С��");
	scanf("%d",&n);
	array=(int*)malloc(sizeof(int)*(n+1));//��һ��Ԫ�����������м����
	printf("���������ݣ��ÿո�ָ�)":);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&array[i]);
	 } 
	 quick_sort(array,0,n-1);
	 printf("�����Ϊ��");
	 for(i=0;i<=n-1;i++)
	 {
	 	printf("%d",array[i]);
	 }
	 printf("\n");
 } 
