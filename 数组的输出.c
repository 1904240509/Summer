//输入一个3行4列的数组，找出该数组中绝对值最大的元素、输出该元素及其两个下标值。如有多个输出行号最小的，还有多个的话输出列号最小的。 


#include"stdio.h"  

#include"math.h"

#include"stdlib.h"     

//abs( )主要用于对求整数的绝对值，在“stdlib.h”(或 <cstdlib>)头文件里面。

//而fabs( )主要是求精度要求更高的double ，float 型的绝对值，在<cmath>头文件里.

//两者在只#include<cmath>时都可以使用。 

int main()

{

int a[3][4]; 

int i,j;

int max;

int max_x,max_y;

for(i=0;i<3;i++)

for(j=0;j<4;j++)

scanf("%d",&a[i][j]);



max=a[0][0];

for( i= 2;i>=0;i--)

for( j = 3;j>=0;j--)

{

if(abs(a[i][j])>=abs(max))

{

max=a[i][j];

max_x=i+1;

max_y=j+1;

}

} 

printf("%d %d %d",abs(max),max_x,max_y);

} 




