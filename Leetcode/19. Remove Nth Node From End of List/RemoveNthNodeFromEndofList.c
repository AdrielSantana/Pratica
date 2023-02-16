#define NULL 0
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

void insertAfter(struct Node *prev_node, int new_val)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    /* 2. allocate new node */
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    /* 3. put in the val */
    new_node->val = new_val;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}

struct Node *removeNthFromEnd(struct Node *head, int n)
{
    struct Node *iter = head;
    int len = 0, i = 1;
    while (iter)
        iter = iter->next, len++;
    if (len == n)
        return head->next;
    for (iter = head; i < len - n; i++)
        iter = iter->next;
    iter->next = iter->next->next;
    return head;
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));

    head->val = 1;
    head->next = NULL;

    for (int i = 9; i >= 1; i--)
    {
        insertAfter(head, i + head->val);
    }

    head = removeNthFromEnd(head, 5);

    while (head != NULL)
    {
        printf("%d\n", head->val);
        head = head->next;
    }
}