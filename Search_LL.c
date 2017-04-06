//Program to search for an element in a Linked List.
#include <stdio.h>
#include <stdlib.h>
 struct node
{
    int a; 
    struct node *link; 
};
void create(struct node **, int);
void search(struct node *, int);
void delete(struct node **);
int main()
{
    struct node *head = NULL;
    int key, num;
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("\nDisplaying the linked list\n");
    create(&head, num);
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    search(head, key);
    delete(&head);
    return 0;
}
void create(struct node **head, int num)
{
    int i;
    struct node *temp;
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = rand() % num;
        if (*head == NULL)
        {
            *head = temp;
            temp->link = NULL;
        }
        else
        {
            temp->link = *head;
            *head = temp;
        }
        printf("%d",temp->a);
    }
}
void search(struct node *head, int key)
{
    while (head!= NULL)
    {
        if (head->a == key)
        {
            printf("Element found\n");
            return;
        }
        head = head->link;
    }
    printf("Element not found\n");
}
void delete(struct node **head)
{
    struct node *temp;
 
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->link;
        free(temp);
    }
}