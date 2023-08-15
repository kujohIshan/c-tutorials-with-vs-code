#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int fi ;
    int ri ;
    int *arr;
};
int isfull(struct queue*ptr)
{
    if(ptr->ri==ptr->size-1){
        return 1;
    }
    else {
        return 0;
    }
}
int isempty(struct queue*ptr)
{
    if(ptr->fi==ptr->ri){
        return 1;
    }
    else {
        return 0;
    }
}
void enque(struct queue* ptr)
{
    int value;
    if(ptr->ri==ptr->size-1){
        printf("Queue is full \n");
    }
    else{
        printf("Enter the value to be enqueed \n");
        scanf("%d",&value);
        ptr->ri++;
        ptr->arr[ptr->ri]=value;
    }
}
void deque(struct queue* ptr)
{
    if(ptr->fi==ptr->ri)
    {
        printf("The queue is empty\n");
    }
    else{
        ptr->fi++;
        int value = ptr->arr[ptr->fi];
        printf("The dequequed element is %d \n ",value);
    }
}
void display(struct queue* ptr)
{
    if(ptr->fi<=ptr->size-1)
    {
        printf("Elements of the queue is \n");
        for(int i =0; i<=ptr->ri; i++)
        {
            printf("%d  ",ptr->arr[i]);
        }
    }
    else
        {
            printf("\n The queue is empty");
        }
}
int main()
{
    struct queue *q= (struct queue *)malloc(sizeof(struct queue));
    printf("Enter the size of the quqeue\n");
    scanf("%d",&q->size);
    q->fi=-1;
    q->ri=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    int choice;
    do
    {
        printf("Enter 1 for enque \n 2 for dequeue \n 3 for display \n 4 for full check \n 5 for empty check \n 6 for exit \n");
        scanf("%d",&choice);
        printf("%d \n",choice);
        switch (choice)
        {
        case 1:
      {
        enque(q);
        break;
      }
      case2:
       {
        deque(q);
        break;
      }
        case 3:
        {
            display(q);
        }
        case 4:
        {
             printf("%d \n",isfull(q));
                break;
        }
        case 5:
        {
            printf("%d \n",isempty(q));
            break;
        }
        case 6:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
        default:
        printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
        
        }
    } while (choice <=6);
    return 0;
}