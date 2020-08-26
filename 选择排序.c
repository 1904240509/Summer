//用选择法对10个整数从小到大排序。

#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<9; i++){
        for(j=0; j<10-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
