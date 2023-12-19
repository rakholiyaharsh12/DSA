#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    
};

struct node *head  = NULL;
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = val;
    temp -> next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    
    ptr -> next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head,*p;

    if(head == NULL)
    {
        printf("List is already emty..\n");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else 
    {
        while (ptr -> next != NULL)
        {
            p = ptr;
            ptr = ptr -> next;
        }
        p -> next = NULL;
        free(ptr);
    }
    return;
}

void dispaly()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
        
    }
    printf("\n");
}

int main()
{
    insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    insertend(500);

    dispaly();
    deleteend();
    deleteend();
    deleteend();
    dispaly();
}
