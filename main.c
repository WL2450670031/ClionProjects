#include <stdio.h>
#include <stdlib.h>

#define size sizeof(struct Node)
//函数声明
struct Node *linklist(int num);
void print(struct Node *head);

struct Node
{
    double data;
    struct Node *next;
};
//主函数
int main()
{
    struct Node *head;
    int num;
    printf("输入数据个数:");
    scanf("%d",&num);
    head = linklist(num);
    print(head);
    return 0;
}

struct Node *linklist(int num)
{
    int length = 0;
    struct Node *head = (struct Node *) malloc(size);
    struct Node *p;
    struct Node *q;
    q = head;

    while(num--)
    {
        length++;
        p = (struct Node *) malloc(size);
        printf("输入数据:");
        scanf("%lf",&p->data);
        q->next = p;
        q = p;
    }
    q->next = NULL;

    return head;
}

void print(struct Node *head)
{
    int i = 0;
    struct Node *p;
    struct Node *q = head->next;
    while(q != NULL)
    {
        i++;
        printf("结点%d:\t%.1lf\n",i,q->data);
        p = q;
        q = p->next;
    }
}

