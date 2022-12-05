#include <stdio.h>
#include <stdlib.h>
/*
--------VERY IMPORTANT---------
Add node function works for adding 'fifth' but not for 'sixth' and 'seventh'
If you can improve this, plss improve
*/
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

node addNode(node *ptr)
{
    node *new = (node *)malloc(sizeof(node));
    ptr->next = new;
    int newData;
    printf("Enter the number you want to add in Linked list: ");
    scanf("%d", &newData);
    new->data = newData;
    new->next = NULL;
    return *new;
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

    node fifth = addNode(fourth);
    node sixth = addNode(&fifth);
    node seventh = addNode(&sixth);

    traverseLinkedList(first);
    return 0;
}
