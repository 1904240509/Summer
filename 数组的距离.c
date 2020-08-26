//已知元素从小到大排列的两个数组x[]和y[]，请写出一个程序算出两个数组彼此之间差的绝对值中最小的一个，这叫做数组的距离

#include<stdio.h>
#include<malloc.h>
void function(int x,int y);
/*===============================================*/
int main()
{
 int x,y;
 
     while(scanf("%d%d",&x,&y)!=EOF)
      {
        function(x,y);
      }
return 0;
}
/*===============================================*/
void function(int x,int y)
 
{
  int *X;
  int Y;
 
     int distance=10000000;    //用于记录最小距离
         X=(int *)malloc(x*sizeof(int)); //为数组X[],开辟空间
 
            for(int i=0;i<x;i++)
                scanf("%d",&X[i]);    //输入X[],中元素
 
   for(int j=0;j<y;j++)            //输入Y，并求最小距离
   { 
 
      if(distance!=0)     //距离等于0，不用求之后输入Y的与X[]的距离了
      {    scanf("%d",&Y);
           for(int i=0;i<x;i++)  //求最小距离
            {
                if(Y>=X[i]&&(Y-X[i])<distance)   //距离要用大的数减去小的数，因为输入的数据有可能为负数
                   distance=Y-X[i];
                     else
                        if(Y<X[i]&&(X[i]-Y)<distance)
                           distance=X[i]-Y;
            }
      }
      else
      scanf("%d",&Y);
   }
  printf("%d\n",distance);
} 
