//Program to convert a Linear linked list to a circular linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *link;
};
void create(struct node **);//next link.. tocircular circular..release delete..print display
void circular(struct node **);
void delete(struct node **);
void print(struct node *);
int main()
{
    struct node *p = NULL;
    int result,count;
    printf("Enter data into the list\n");
    create(&p);
    circular(&p);
    printf("Circular list is generated\n");
    print(p);
    delete(&p);
    return 0;
}
void circular(struct node **p)
{
    struct node *rear;
    rear = *p;
    while (rear->link!= NULL)
    {
        rear = rear->link;
    }
    rear->link = *p;
}
void create(struct node **head)
{
    int c, ch;
    struct node *temp;
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->link = *head;
        *head = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
void print(struct node *head)
{
    struct node *temp = head;
    printf("Displaying the list elements\n");
    printf("%d\t", temp->num);
    temp = temp->link;
    while (head != temp)
    {
        printf("%d\t", temp->num);
        temp = temp->link;
    }
    printf("and back to %d\t%d ..\n", temp->num, temp->link->num);
}
void delete(struct node **head)
{
    struct node *temp = *head;
    temp = temp->link;
    (*head)->link = NULL;
    (*head) = temp->link;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->link;
    }
}