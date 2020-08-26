//有两个链表a和b，设节点中包含学号、成绩。从a链表中删去b链表中有相同学号的那些节点。

#include<stdio.h>
#include<malloc.h>
typedef struct Node
{
    int id;
    int score;
    int length; /*存储链表的长度*/ 
    struct Node *next;
}LinkNode;
/*建立链表*/
LinkNode *CreateList(int len);
/*输出链表*/ 
void DispList(LinkNode *L);
/*获取第i个节点的元素值*/ 
int GetElem(LinkNode *L,int i);
/*找出链表中与元素e值相等的元素的位置*/ 
int LocateElem(LinkNode *L,int e);
/*删除链表La中与Lb相同的元素的节点*/
LinkNode *Delnode(LinkNode *La,LinkNode *Lb);
int main()
{
    int a,b;
    LinkNode *La,*Lb,*L;
    scanf("%d%d",&a,&b);
    La=CreateList(a);
    Lb=CreateList(b);
    DispList(Delnode(La,Lb));
    return 0;
}
LinkNode *CreateList(int len)   /*尾插法建立链表*/ 
{
    LinkNode *L,*p,*r;
    int id,score;
    L=(LinkNode *)malloc(sizeof(LinkNode));
    r=L;
    for(int i=0;i<len;i++)
    {
        p=(LinkNode *)malloc(sizeof(LinkNode));
        scanf("%d%d",&id,&score);
        p->id=id;p->score =score;
        L->length=len;
        r->next=p;
        r=p;
    }
    r->next=NULL;
    return L;
}
void DispList(LinkNode *L)
{
    LinkNode *p=L->next;
    printf("%d\n",L->length); /*输出链表中剩余节点的个数*/ 
    while(p!=NULL)
    {
        printf("%d %d\n",p->id,p->score);
        p=p->next;
    }
}
int GetElem(LinkNode *L,int i)
{
    LinkNode *p=L;
    for(int j=1;j<=i;j++)
    {
        p=p->next;
    }
    return (p->id);
}
int LocateElem(LinkNode *L,int e)
{
    LinkNode *p=L->next;
    int i=0; 
    /*此处i的作用是为了标记节点的位置*/ 
    while(p!=NULL)
    {
        if(p->id==e)
            return (i+1);
        p=p->next;
        i++;
    }
    return 0;    
} 
LinkNode *Delnode(LinkNode *La,LinkNode *Lb)
{
    LinkNode *p,*q=Lb->next,*pre;
    int e,i,j,Location=0;
    for(i=1;i<=Lb->length;i++)
    {
        e=GetElem(Lb,i);
        if(Location=LocateElem(La,e))
        {
            p=La->next;pre=La;
            for(j=1;j<Location;j++)
            {
                pre=pre->next;
                p=p->next;
            }
            pre->next=p->next;
            La->length--;
            free(p);
            p=pre->next ;
        }
    }
    return La;
}

