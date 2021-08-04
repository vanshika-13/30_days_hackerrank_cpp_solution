#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *insert(Node *head, int data)
{
    //Complete this function
    struct Node *ne, *tmp;
    ne = (struct Node *)malloc(sizeof(struct Node *));
    ne->data = data;
    ne->next = NULL;
    if (head == NULL)
    {
        head = ne;
    }
    else
    {
        tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = ne;
    }
    return head;
}

void display(Node *head)