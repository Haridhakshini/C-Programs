//Program to create a Linked list.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int n;
        struct node *p;
    };
    typedef struct node NODE;
 
    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the number\n");
        scanf("%d", &head-> n);
        if (first != 0)
        {
            temp->p = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->p = 0;
    temp = first;
    printf("\n The linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->n);
        count++;
        temp = temp -> p;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}