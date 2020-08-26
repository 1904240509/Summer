//有一个整型偶数n(2<= n <=10000),你要做的是：先把1到n中的所有奇数从小到大输出，再把所有的偶数从小到大输出。 
//第一行有一个整数i（2<=i<30)表示有 i 组测试数据；每组有一个整型偶数n。
//第一行输出所有的奇数。第二行输出所有的偶数.
#include <stdio.h>
int main(){
    int T;
    int i;
    int n;    
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            if(i%2==1){
                if(i==1)
                    printf("%d",i);
                
                else
                    printf(" %d",i);
            }
        }   
        printf("\n");    
        for(i=1;i<=n;i++){
            if(i%2==0){
                if(i==2)
                    printf("%d",i);
                
                else
                    printf(" %d",i);
            }
        }
        printf("\n");
        if(T!=0)
            printf("\n");
    }
    return 0;
}
