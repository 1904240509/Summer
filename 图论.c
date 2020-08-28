//给定一个无向图和其中的所有边，判断这个图是否所有顶点都是连通的。

#include<stdio.h> 
#define N 1001
struct node{   
    int x;   //建设一个队列
    //int y;
};
int main(){
    int i,j,n,m;
    int x,y;
    while(scanf("%d%d",&n,&m)!=EOF&&n!=0){
        int a[N][N]={0};
        for(i=1;i<=m;i++){
            scanf("%d%d",&x,&y);
            a[x][y]=1;//表示x这个点和y这个点有关系
            a[y][x]=1;//同样y这个点也和x这个点有关系
        }
        struct node que[N]; 
        int head,tail,k;//head指向的点，表示由该点来扩充节点
        //tail表示扩充出来的点
        int book[N]={0},flag=0;
        head=1,tail=2;
        que[head].x=1;//入队
        while(head<tail){  //head没有小于tail的话表示如果不能再扩充了就退出
            for(k=1;k<=n;k++){   //列举从1到n表示能扩充的点
                if(a[que[head].x][k]==1&&book[k]==0){ 
                    book[k]=1;//表示k这个点进队了
                    que[tail].x=k;
                    //printf("%d ",k);
                    if(tail==n){  
                        flag=1;//标记作用
                        break;
                    }
                    tail++;
                }
            }
            if(flag==1)
                break;
            head++;
        };
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    };
    return 0;
}
