#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
}; struct Node* head= NULL;
void create()
{
    if(head==NULL){
        int n;
        printf("Enter the number of nodes of linked list \n");
        scanf("%d",& n);
        head= (struct Node*)malloc(sizeof(struct Node));
        struct Node * current = head;
        for (int i = 1; i <= n; i++)
        {
            printf("Enter the value for node %d: ", i);
            int val;
            scanf("%d", &val);
            current->data = val;
             if (i != n) {
                current->next = (struct Node*)malloc(sizeof(struct Node));
                current = current->next;
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
     if (p < 1) {
        printf("Invalid position.\n");
        return;
    }
    // inserting at the first index
    if(p==1){
        struct Node *temp= (struct Node*) malloc (sizeof(struct Node));
        temp->data=v;
        temp->next=head;
        head=temp;
    }
    else{
        struct Node*temp= (struct Node*) malloc (sizeof(struct Node));
        struct Node *ptr =head;
        int i=1;
        while (ptr != NULL && i < p-1 )
        {
            ptr=ptr->next;
            i++;
        }
        if (ptr == NULL) {
            printf("Invalid position.\n");
            free(temp); // Free the allocated memory for temp
            return;
        }
        // inserting at last index
        if(ptr->next==NULL){
            temp->next=NULL;
            ptr->next=temp;
            temp->data = v;
            ptr=temp;
        }
        else{
            temp->next=ptr->next;
            ptr->next=temp;
            temp->data=v;
        }
        
    }
}
void delete (int p){
    // deleting the first element
    if (p==1)
    {
        struct Node* ptr= head;
        head= head->next;
        free(ptr);
        printf("Data at position %d is deleted\n", p);
    }
    else{
        struct Node* current=head;
        struct Node* prev = NULL;
        int i =1;
        while ( current!=NULL && i<p)
        {
            prev=current;
            current= current->next;
            i++;
        }
        // deleting the last index
        if(current->next== NULL) {
            prev->next=NULL;
            free(current);
            printf("Data at position %d is deleted\n", p);
        }
        prev->next=current->next;
        free(current);
        printf("Data at position %d is deleted\n", p);
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
