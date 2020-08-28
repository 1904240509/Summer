#include <stdio.h>
int binary_search(int key,int a[],int n){
    int l=0, r=n-1,mid;
    while (l<=r)
    {
        int mid= l+(r-l)/2;  //避免溢出
        if(a[mid]==key)
         {
          printf("%d\n",mid);   //打印要查找元素的位置
          break;
         }
        if(key>a[mid])
           l=mid+1;
        else 
           r=mid-1;
    }
   return 0;
}

int main(){
    int i, a[100],n,key;
    printf("请输入数组长度：\n");
    scanf("%d",&n);
    printf("请输入数组元素：\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("请输入你想查找的元素：\n");
    scanf("%d",&key);
    binary_search(key,a,n);
    printf("\n");
    return 0;
}
