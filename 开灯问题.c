//有n盏灯，编号为1~n，第1个人把所有灯打开，第2个人按下所有编号为2 的倍数的开关（这些灯将被关掉），第3 个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），
//依此类推。一共有k个人，问最后有哪些灯开着？输入：n和k，输出开着的灯编号。k≤n≤1000
//输入一组数据：n和k
//输出开着的灯编号
#include <stdio.h> 
#include <string.h>
int main(){
    int n;
    int k;
    int flag[1001];
    int i;
    int j;
    scanf("%d%d",&n,&k);
    memset(flag,0,sizeof(int)*1001);
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            if(j%i==0){
                if(flag[j-1]==0)
                    flag[j-1]=1;
                    
                else
                    flag[j-1]=0;
            }
        }
    }  
    for(i=0;i<n;i++){
        if(flag[i]==1){
            printf("%d",i+1);
            flag[i]=0;
            break;
        }
    }    
    for(i=0;i<n;i++){
        if(flag[i]==1)
            printf(" %d",i+1);
    }   
    printf("\n");   
    return 0;
}
