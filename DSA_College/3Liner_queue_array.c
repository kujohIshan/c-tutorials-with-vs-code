#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void push(int val)
{
    if(front==-1 && rear == -1){
        front=0;
        rear=0;
    }
    else if(rear==max-1){
        printf("\n Overflow");
    }
    else{
        rear++;
        queue[rear]= val;
    }
}
void pop(){
    if(front==-1|| front > rear)
    {
        printf(" The queue is empty \n");
    }
    else{
        int v= queue[front];
        front++;
        if(front > rear){
            front=-1;
            rear=-1;
        }
        printf("%d is deleted ", v);
    }
}
void display()
{
    if(front== -1|| front > rear){
    printf(" The queue is empty \n");
    }
    else{
    for (int i = 0; i <=rear ; i++)
    {
        printf("%d ", queue[i]);
    }
    }
}
int main()
{
    int operation;
    do
    {
        printf("Enter choices \n 1 for 'push' \n 2 for 'pop' \n 3 for'display' \n 4 to exit \n ");
        scanf("%d",&operation);
        switch (operation){
            case 1:
            printf("Enter the value \n");
            int value;
            scanf("%d",&value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("Invalid choice");
        }
    } while (operation!=4);
    return 0;
}