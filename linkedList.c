#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void traverseLinkedList(node *n)
{
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}

node *addAtBeginning(node *first, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = first;
    return ptr;
}

node *addAtEnd(node *first, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return first;
}

node *addAtIndex(node *first, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    node *p = first;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next=p->next;
    p->next = ptr;
    return first;
}
int main()
{
    node *first;
    node *second;
    node *third;
    node *fourth;

    first = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printf("BEFORE\n");
    traverseLinkedList(first);
    first = addAtBeginning(first, 56);
    first = addAtEnd(first, 72);
    first = addAtIndex(first, 32, 1);
    printf("ATFER\n");
    traverseLinkedList(first);
    return 0;
}
