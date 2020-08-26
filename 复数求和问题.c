//从键盘读入n个复数（实部和虚部都为整数）用链表存储，遍历链表求出n个复数的和并输出。 


#include <stdio.h>
#include <malloc.h>
typedef struct linklist
{
    int real,image;
    struct linklist *next;
}ComplexList;
ComplexList *CreateList(int n)
{
    ComplexList *head,*p,*q;
    head=(ComplexList*)malloc(sizeof(ComplexList));
    head->next=NULL;
    q=head;
    while(n--)
    {
        p=(ComplexList*)malloc(sizeof(ComplexList));
        scanf("%d%d",&p->real,&p->image);
        q->next=p;
        q=p;
    }
    q->next=NULL;
    return head;
}
void CountList(ComplexList *head)
{
    int sum1=0,sum2=0;
    ComplexList *p=head;
    p=p->next;
    while(p!=NULL)
    {
        sum1+=p->real;
        sum2+=p->image;
        p=p->next;
    }
    printf("%d+%di\n",sum1,sum2);
}
int main()
{
    int n;
    scanf("%d",&n);
    ComplexList *head=CreateList(n);
    CountList(head);
    return 0;
}
