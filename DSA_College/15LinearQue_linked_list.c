#include<stdio.h>
#include<stdlib.h>
struct Qnode{
    int data;
    struct Qnode*next;
};
struct Qnode *front=NULL;
struct Qnode *rear=NULL;
void insert(int val){
 struct Qnode * ptr= (struct Qnode*)malloc(sizeof(struct Qnode));
 if(ptr==NULL){
    printf("The queue is full \n");
    return;
 }
 ptr->data=val;
 ptr->next=NULL;
 if (front== NULL && rear == NULL)
 {
    front= ptr;
    rear= ptr;
 }
 
 else{
    rear->next=ptr;
    rear= ptr;
 }
}
void delete()
{
    struct Qnode *ptr=front;
    if (front==NULL)
    {
        printf("The queue is empty \n");
        return;
    }
    else if(front == rear){
        front= NULL;
        rear= NULL;
    }
    else{
        front =front->next;
        int v= ptr->data;
        printf("%d is deleted\n",v);
    }
    free(ptr);
}
void display(){
    struct Qnode* ptr= front;
    printf("Elements of the queue is \n");
    while (ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
 int main()
 {
    int option;
    do
    {
        printf(" Enter \n 1 for 'Insert' \n 2 for 'delete' \n 3 for 'dispaly' \n");
        scanf("%d",& option);
        switch (option)
        {
        case 1:
            printf("Enter the value \n");
            int val;
            scanf("%d",&val);
            insert(val);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid choice \n");
            break;
        }
    } while (option!=4);
    return 0;
 }
