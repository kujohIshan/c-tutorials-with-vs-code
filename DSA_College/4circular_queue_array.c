#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear; 
    int * arr;
};
void push(struct queue*ptr ,int val)
{
    if ( (ptr->rear+1)%ptr->size== ptr->front)
    {
        printf("The stack is full \n");
    }
    else{
        if (ptr->front==-1 && ptr->rear==-1)
        {
            ptr->front++;
            ptr->rear++;
        }
        
        ptr->rear=(ptr->rear +1)% ptr->size;
        ptr->arr[ptr->rear]= val;
        printf("The inputed Value is %d \n",val);
    }
}
void delete(struct queue*ptr)
{
    int a=-1;
    if (ptr->rear==ptr->front)
    {
     printf("The queue is empty \n");
    }
    else{
        ptr->front=(ptr->front+1)%ptr->size;
        a= ptr->arr[ptr->front];
        printf("%d is Deleted \n",a);
    }
}
void display(struct queue*ptr)
{
    if (ptr->rear==-1 && ptr->front==-1)
    {
        printf("The queue is empty \n");
    }
  else
  {
    int i= ptr->front;
    do{
        i=(i+1)%ptr->size;
        printf("%d ", ptr->arr[i] );
    } while(i!=ptr->rear);
  }
  
}
int main()
{
    printf("Enter the size of the queue \n");
    int n;
    scanf("%d",&n);
    struct queue *CQ= (struct queue *) malloc(sizeof(struct queue));
    if(CQ==NULL){
        printf("Memory Allocation failed \n");
        return -1;
    }
    CQ->size=n;
    CQ->front=-1;
    CQ->rear=-1;
    CQ->arr=(int *)malloc(CQ->size*sizeof(int));
    int option;
    do{
    printf("Enter 1 for insert \n 2 for delete \n 3 for display \n 4 for exit \n");
    printf("Enter the option \n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    int v;
    printf("Enter the value \n");
    scanf("%d",& v);
    push(CQ,v);
     break;
    case 2:
    delete(CQ);
        break;
    case 3:
    display(CQ);    
    break;
    default:
    printf(" Invalid option ");
        break;
    }
    } while(option !=4);
    
    free(CQ->arr); // Free allocated memory
    free(CQ);
    return 0;
}