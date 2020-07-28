/*给定某整数数组和某一整数b。要求删除数组中可以被b整除的所有元素，同时将该数组各元素按从小到大排序。
如果数组元素数值在A到Z的ASCII之间，替换为对应字母。元素个数不超过100，b在1至100之间。 */

#include <stdio.h>
int main(){
    int n,b,a[100],j=0;
    scanf("%d %d",&n,&b);
    for(int i=0,temp;i<n;i++){
        scanf("%d",&temp);
        temp%b!=0?a[j++]=temp:0;
    }
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int k=i+1;k<n;k++){
            if(a[temp]>a[k])
                temp=k;
        }
        int swap=a[temp];
        a[temp]=a[i];
        a[i]=swap;
        if(a[i]>='A'&&a[i]<='Z')
            printf("%c ",a[i]);
        else
            printf("%d ",a[i]);
    }
    return 0;
}
