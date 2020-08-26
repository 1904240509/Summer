//有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数。写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。

#include <stdio.h>
#include <malloc.h>
int main()
{
    int    *a    = NULL;
    int    *b    = NULL;
    int    N;
    scanf( "%d", &N );   //输入N
 
    a = (int *) malloc( N * sizeof(int) );  //开辟空间存N个数
 
    for ( int i = 0; i < N; i++ )   //输入N个数
        scanf( "%d", &a[i] );
 
    int m;
    scanf( "%d", &m );      //输入转移个数m
    b = (int *) malloc( m * sizeof(int) );   //开辟空间存转移数
 
    for ( int i = 0; i < m; i++ )   //把a[] 中要转移的m个数存入另一个数组 b[]；
    {
        b[i] = a[N - m]; N++;
    }
 
    for ( int j = 9; j >= m; j-- )  //a[] 从末尾依次等于前一个数，移动N-m次；
        a[j] = a[j - m];
 
    for ( int i = 0; i < m; i++ )  //把b[]中的数，放到a[]的前面；
        a[i] = b[i];
 
    for ( int i = 0; i < 10; i++ )  //输出a[];
        printf( "%d ", a[i] );
         
        return (0);
}
