#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node*next;
}List; List* head= NULL;
void createlist()
{
    if (head==NULL)
    {
        List* new=(List*)malloc(sizeof(List));
        List* prev;
        int n;
        printf("Enter the number of nodes the list will initially have \n");
        scanf("%d",&n);
        if (n>0)
        {
            head= new;
            int val;
            printf("Enter the value for element 1 \n");
            scanf("%d",&val);
            new->data=val;
            new->next=NULL;
            for (int i = 1; i < n; i++)
            {
                new->next=(List*)malloc(sizeof(List));
                new= new->next;
                printf("Enter the value for element %d \n",i+1);
                scanf("%d",&val);
                new->data=val;
                prev= new;
                new->next=head;
            }
            
        }
        printf("The list is created \n");
    }
    else{
        printf("The list has already been created \n");
    }
}
void display()
{
    List* ptr= head;
    if(head==NULL)
    {
        printf("Nothing to print \n");
    }
    else{
        do{
            printf("%d ",ptr->data);
            ptr= ptr->next;
        } while(ptr!=head);
    }
}
void insertBegin(int val)
{
    List *ptr=(List *)malloc(sizeof(List));
    List *p= head->next;
    ptr->data=val;
    while(p->next!= head){
        p= p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head= ptr;
}
int main()
{
    createlist();
    insertBegin(7);
    display();
    return 0;
}