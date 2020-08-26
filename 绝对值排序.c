//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。

#include <stdio.h>
#include <math.h>                     //包含绝对值函数的头文件
int main()
{
    int i,j,swap,k;                           //swap为交换用
    int a[100][100]={0};
    int size[100];                            //存每行有多少个数
    for(k=0;scanf("%d",&size[k])&&size[k];k++)//k表示的就是第几行  a[i][j]表示第i行第j个数（不算控制长度的数）
    {    
        for(i=0; i<size[k]; i++)
        {
            scanf("%d",&a[k][i]);
        }
        for(i=0; i<size[k]-1; i++)             //冒泡法比较绝对值的大小，并排序
        {
            for(j=0; j<(size[k]-i-1); j++)
            {
                if(abs(a[k][j+1]) > abs(a[k][j]))
                {
                    swap = a[k][j+1];
                    a[k][j+1] = a[k][j];
                    a[k][j] = swap;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<size[i];j++)
        {
            printf("%d ",a[i][j]);             //输出
        }
        printf("\n");
    }
    return 0;
}
