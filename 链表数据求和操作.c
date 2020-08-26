//读入10个复数，建立对应链表，然后求所有复数的和。

#include<stdlib.h>
#include<stdio.h>
 
typedef struct node
{
    int real;                                            //实部
    int imaginary;                                       //虚部 
    struct node *next;
}Node;
 
Node *creatnode(Node *head, int real, int imaginary)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->real = real;
    node->imaginary = imaginary;
    node->next = NULL;
    if (!node)
    {
        printf("申请内存失败");
        exit(0);
    }
    if (!head)
    {
        head = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
    return head;
}
 
int main()
{
    int i, real, imaginary, sum1 = 0, sum2 = 0;
    char symbol;
    Node *head = NULL;
    for (i = 0; i < 10; i++)
    {
        scanf("%d %d", &real, &imaginary);
        head = creatnode(head, real, imaginary);
    }
    Node *p = head;
    while (p)
    {
        sum1 += p->real;
        sum2 += p->imaginary;
        p = p->next;
    }
    if (sum2 >= 0)
        symbol = '+';
    else
        symbol = '-';
    printf("%d%c%di",sum1,symbol,sum2);
}
 
