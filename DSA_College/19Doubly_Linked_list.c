#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};struct Node* head=NULL;
void create()
{
    int n;
    if(head==NULL){
        printf("Enter the number of nodes \n ");
        scanf("%d",&n);
        head= (struct Node*) malloc(sizeof(struct Node));
        struct Node* current = head;
        for(int i=1;i<=n;i++)
        {
            printf("Enter the value of the %d  node \n ",i);
            int val;
            scanf("%d",& val);
            if(i==1){
                current->data=val;
                current->prev=NULL;
            }
            current->data=val;
            if(i!=n){
                current->next= (struct Node*) malloc(sizeof(struct Node));
                current ->next->prev= current;
                current=current->next;
            }
        }
         current->next = NULL; // Set the last node's next pointer to NULL
    printf("Linked list created.\n");
    }
    else{
     printf("The linked list is already created.\n");
}
}
void insert(int v,int p)
{
    if(p<1){
        printf("Invalid position \n");

    }
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = v;
    temp->next = NULL;
    temp->prev = NULL;

    // Inserting at front
    if (p == 1) {
        temp->next = head;
        if (head != NULL)
            head->prev = temp;
        head = temp;
        return;
    }
    else{
        struct Node* current =head;
        struct Node* pre= NULL;
        int i=1;
        while ( current !=NULL && i<p)
        {
            pre= current;
            current= current->next;
            i++;
        }
        // inserting at last
        if(current==NULL){
        pre->next = temp;
        temp->prev = pre;
        return;
        }
        temp->prev = pre;
        temp->next = current;
        pre->next = temp;
        current->prev = temp;
    }
}
void delete(int p)
{
    struct Node*current= head;
    struct Node* before=NULL;
    int c=1;
    // deleting the first
    if(p==1){
        current->next->prev=NULL;
        head=current->next;
        current->next=NULL;
    }
    else{
        while(c<p)
        {
            before=current;
            current=current->next;
            c++;
        }
        // deleting the last node
        if(current->next==NULL){
            current->prev->next=NULL;
            current->prev=NULL;
            free(current);
            return;
        }
        // deleting at any othe position
        before->next=current->next;
        current->next->prev=before;
        current->next=NULL;
        current->prev=NULL;
        free(current);
    }
}
void display()
{
 if(head==NULL){
    printf("Linked list is empty \n");
 }
 struct Node* current = head;
 printf("the linked list elements \n");
 while(current!=NULL)
{
    printf("%d ", current->data);
    current= current->next;
}
printf("\n");
}
int main()
{
int choice;
do
{
     printf("Enter choices \n 1 for 'create' \n 2 for 'Insert' \n 3 for'Delete' \n 4 to 'Display' \n 5 for 'Exit' \n ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            create();
            break;
            case 2:
             printf("Enter the value and position \n");
            int value, pos;
            scanf("%d %d",&value,&pos);
            insert(value, pos);
            break;
            case 3:
            printf("Enter position to delete \n");
            int po;
            scanf("%d",& po);
            delete(po);
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Invalid choice");
        }
} while (choice< 6);
 return 0;
}