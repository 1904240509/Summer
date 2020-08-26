//已有a、b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。

#include <stdio.h>
#include <malloc.h>
 
typedef struct student {
    double    number;
    double    gread;
 
    struct student * next;
}*node, Node;                   //结点
 
node creat( int n );         //创建链表函数
 
void output( node l );        //输出函数
 
void order( node l1, node l2 );   //排序函数
 
 
int main()
{
    int    n, m;            //a ，b
    node    head1, head2;   //两个链表的头结点
 
    scanf( "%d%d", &n, &m );  
 
    head1    = creat( n );   //创建链表a
    head2    = creat( m );   //创建链表b
 
    order( head1, head2 );   //排序
  
    return(0);
}
/*-------------------------------------------------------------*/
 
node creat( int n )
{
    node h;         //头结点指针
    h    = (node) malloc( sizeof(Node) );   //创建头结点
    h->next = NULL;                         //next指针域赋空
    node    q = h;                         //定义指针q，指向头结点
    node    p;                             
 
    for ( int i = 0; i < n; i++ )       //创建n个结点
    {
        p = (node) malloc( sizeof(Node) );   
        scanf( "%lf%lf", &(*p).number, &(*p).gread );  //输入学号，成绩
 
        p->next = q->next;           //采用后差法插入节点
        q->next = p;
        q    = p;
    }
 
    return(h);   //返回头结点
}
/*-------------------------------------------------------------*/
 
void output( node l )      //输出链表每个结点的信息
{
    l = l->next;
    node q; //用于释放结点
    while ( l != NULL )
    {
        printf( "%.0f %0.f\n", l->number, l->gread );
        q=l;
        l = l->next;
        free(q);  //释放结点
    }
}
 
/*-------------------------------------------------------------*/
void order( node l1, node l2 )   //排序
{
    node q;           //定义指针q
    q    = l1;           //q指向表a的头结点
    l2    = l2->next;        //表b的头结点下移
 
    while ( q->next != NULL )    //让q指向表a的最后一个结点
    {
        q = q->next;
    }
    q->next = l2;          //表a的最后一个结点的next指向表b的（首结点）完成连接
 
    q = l1->next;     //再次把q指向表a的头结点
 
    node min;       //定义指向最小学号结点的指针
 
  
    int    t;      //保存最小学号的变量
    int    n, g;   //交换学号，成绩的中间变量
    node    p;     //定义指针p，用于中间遍历求最小学号
 
    while ( q != NULL )  //开始遍历，选择排序最外层
    {
        p = q;         //p等于查找的第一个结点q
 
        t    = p->number;     //让t等于开始查找的第一个结点的学号
        min    = p;           //最小学号结点指正指向p
        while ( p != NULL )   //从结点p向后遍历
        {
            if ( p->number < t )
            {
                t    = p->number;    //记录最小学号
                min    = p;          //记录最小学号结点
            } 
 
            p = p->next;    //遍历p的下一个结点
        }
 
        n        = q->number;        //n等于第一个结点的学号
        q->number    = min->number;  //最小学号结点的学号与第一个结点的学号交换
        min->number    = n;
 
        g        = q->gread;        //同理把成绩也交换了
        q->gread    = min->gread;    /*整个排序思路就是选择排序*/
        min->gread    = g;
 
        q = q->next;   //第一遍排序完后q后移，也就是选择排序开始排第二遍时的第一个数      
    }
 
    output( l1 );    //排序完成后，输出链表
}
