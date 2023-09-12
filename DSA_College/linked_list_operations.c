#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};struct Node* head=NULL;
void createList()
{
    if(head==NULL)
    {
        int n;
        printf("Enter the number of nodes of the linked List\n");
        scanf("%d",&n);
        struct Node *new=(struct Node*)malloc(sizeof(struct Node));
        if (n>0)
        {
            head=new;
            printf(" Entert the value for 1st \n");
            int val;
            scanf("%d",&val);
            new->data=val;
            new->next=NULL;
            for(int i=1;i<n;i++)
            {
                new->next=(struct Node*) malloc(sizeof(struct Node));
                new=new->next;
                printf("Entert the value for %dst \n",(i+1));
                scanf("%d",&val);
                new->data=val;
                new->next=NULL;
            }
        }
        printf("The linked list is created\n");
    }
    else{
        printf("List is already created \n");
    }
}
void display(){
  struct Node*ptr=head;
  if(head==NULL){
    printf("nothing to print \n");
  }
  else{
    while(ptr!=NULL){
      printf("%d ",ptr->data);
      ptr= ptr->next;
    }
  }
}
int main()
{
    createList();
    display();
    return 0;
}