//有一堆桃子不知数目，猴子第一天吃掉一半，又多吃了一个，第二天照此方法，吃掉剩下桃子的一半又多一个，天天如此，到第m天早上，猴子发现只剩一只桃子了，问这堆桃子原来有多少个？ (m<29)
//第一行有一个整数n,表示有n组测试数据（从第二行开始，每一行的数据为：第m天）；
//每一行数据是桃子的总个数
#include <stdio.h> 
int main(){
    int T;
    int m;
    int i;
    int result; 
    scanf("%d",&T);
    while(T--){
        scanf("%d",&m);    
        result=1;
        for(i=1;i<=m;i++)
            result=(result+1)*2;  
        printf("%d\n",result);    
    }
    return 0;
}
