//有n个人围成一圈，顺序从1开始排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。要求用循环链表实现。

#include<stdio.h>
#include<stdlib.h>


typedef struct L {
    int a;                                            //人员的编号
    int *Next;
} l;


int main() {
    int n, i;
    l *Head =NULL;
 
    scanf("%d", &n);


    for( i=1; i<=n; i++) {                                //直接给那么多的链表赋值
        l *p = (l*)malloc(sizeof(l));
        p->a = i;
        p->Next = NULL;
        l *last = Head;
        if(last) {                                    //判断是不是头节点
            while(last->Next ) {
                last = last->Next ;
            }
            last->Next = p;
        } else {
            Head = p;
        }
    }


    l *tmp;
    int j = 1;
    while(n!=1) {                                           //循环判断到只有一个人的时候结束
        tmp = Head;
        for( tmp; tmp; tmp=tmp->Next ) {
            if(tmp->a !=0) {                       //链表中的值是0的跳过不赋编号
                if(j==3) {
                    tmp->a = 0;            //把编号为3的链表中的值赋0
                    j=0;                    //编号置零
                    n--;                    //总数减一
                }
                j++;                           //编号加一
            }
        }
    }


    l *t = Head;
    for( t; t; t=t->Next ) {                            //遍历链表中的值，把不是0的值输出
        if(t->a !=0) {
            printf("%d", t->a );
        }
    }
 
    return 0;
}

