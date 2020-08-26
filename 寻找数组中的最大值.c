//整数数组a[],数组元素个数小于1等于100。输出数据分作两行：第一行只有一个数，表示数组元素个数；第二行为数组的各个元素。


#include<stdio.h>
#define N 100
int main()
{ int a[N];
  int i,n,max=0,ans;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
    if(max<a[i])
    { max=a[i];
      ans=i;
    }
  }
  printf("%d %d\n",max,ans);
  return 0;
}
