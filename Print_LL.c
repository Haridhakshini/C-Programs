//Program to print the nth node from the last.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *link;
};
void create(struct node **);
void box(struct node *, int);
void delete(struct node **);
int main()
{
    struct node *p = NULL;
    int n;
    printf("Enter data into the list\n");
    create(&p);
    printf("Enter the value n: ");
    scanf("%d", &n);
    box(p, n);
    delete(&p);
    return 0;
}
void create(struct node **head)
{
    int c, ch;
    struct node *temp, *rear;
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->link = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->link = temp;
        }
        rear = temp;
        printf("Do you wish to continue? (Enter 1 OR 0): ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
void box(struct node *head, int n)
{
    struct node *p, *q;
    int i;
    q = p = head;
    for (i = 0; i < n && q != NULL; i++)
    {
        q = q->link;
    }
    if (i < n)
    {
        printf("Enter some other value of n\n");
    }
    else
    {
        while (q->link != NULL)
        {
            q = q->link;
            p = p->link;
        }
        printf("%d is %d nodes from the last node.\n", p->num, n);
    }
}
void delete(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->link;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->link;
    }
}