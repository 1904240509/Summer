//求一个3×3矩阵对角线元素之和。

#include<stdio.h>
int main()
{
    int x, y, sum1 = 0, sum2 = 0, a[3][3];
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++) 
        {
            scanf("%d", &a[x][y]);
            if(x == y)
                sum1+=a[x][y];
            if(x+y == 2)
                sum2+=a[x][y];
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}
