//����һ������ͼ�����е����бߣ��ж����ͼ�Ƿ����ж��㶼����ͨ�ġ�

#include<stdio.h> 
#define N 1001
struct node{   
    int x;   //����һ������
    //int y;
};
int main(){
    int i,j,n,m;
    int x,y;
    while(scanf("%d%d",&n,&m)!=EOF&&n!=0){
        int a[N][N]={0};
        for(i=1;i<=m;i++){
            scanf("%d%d",&x,&y);
            a[x][y]=1;//��ʾx������y������й�ϵ
            a[y][x]=1;//ͬ��y�����Ҳ��x������й�ϵ
        }
        struct node que[N]; 
        int head,tail,k;//headָ��ĵ㣬��ʾ�ɸõ�������ڵ�
        //tail��ʾ��������ĵ�
        int book[N]={0},flag=0;
        head=1,tail=2;
        que[head].x=1;//���
        while(head<tail){  //headû��С��tail�Ļ���ʾ��������������˾��˳�
            for(k=1;k<=n;k++){   //�оٴ�1��n��ʾ������ĵ�
                if(a[que[head].x][k]==1&&book[k]==0){ 
                    book[k]=1;//��ʾk����������
                    que[tail].x=k;
                    //printf("%d ",k);
                    if(tail==n){  
                        flag=1;//�������
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
