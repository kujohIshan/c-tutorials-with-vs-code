#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
}list; list *head;
 
void insertfirst(int data)
{
    list*ptr=(list *)malloc(sizeof(list));
    ptr->data=data;
    ptr->next=head;
    ptr->prev=NULL;
    head=ptr;
}
void insertatlast(int val)
{
 list *new=(list*)malloc(sizeof(list));
 list*ptr=head;
 while(ptr->next!=NULL)
 {
    ptr=ptr->next;
 }
 ptr->next=new;
 new->data=val;
 new->prev=ptr;
 new->next=NULL;
}
void display()
{
    list *ptr=head;
    if(ptr==NULL)
    {
        printf("nothing to print \n");
    }
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    
    }
    printf("\n");
}
int main()
{   
    head=(list *)malloc(sizeof(list));
    list*second=(list *)malloc(sizeof(list));
    list*third=(list*)malloc(sizeof(list));
    list*fourth=(list*)malloc(sizeof(list));
    head->prev=NULL;
    head->data=9;

    head->next=second;
    second->data=54;
    second->next=third;
    second->prev=head;
    third->data=7;
    third->next=fourth;
    third->prev=second;
    fourth->data=21;
    fourth->prev=third;
    fourth->next=NULL;
    printf("before insertion \n");
    display();
    insertfirst(69);
    printf("After insertion \n");
    display();
    insertatlast(85);
      printf("After insertion at last \n");
      display();
    return 0;
}