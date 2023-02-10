#define NULL 0
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

/* Given a node prev_node, insert a new node after the given
prev_node */
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

struct Node *middleNode(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->val = 1;
    head->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;

    for (int i = 10; i >= 1; i--)
    {
        insertAfter(third, i + third->val);
    }

    head = middleNode(head);

    while (head != NULL)
    {
        printf("%d\n", head->val);
        head = head->next;
    }

        return 0;
}
