//输入一个正整数n (1≤ n ≤6),再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标。

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int n,row,col;
    scanf("%d",&n);
    int arr[n][n];
    int abs_arr[n][n];
    int maxx=0;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            scanf("%d",&arr[i][j]);
            abs_arr[i][j]=fabs(arr[i][j]);
            if(abs_arr[i][j]>maxx) {
                maxx=abs_arr[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("%d %d %d",arr[row][col],row+1,col+1);
    return 0;
}

