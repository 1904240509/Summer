//写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。

#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
