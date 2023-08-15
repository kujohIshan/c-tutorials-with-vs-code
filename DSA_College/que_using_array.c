#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int fi;
    int ri;
    int*arr;
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
void enqueque(struct queue* ptr, int val)
{
    if(ptr->ri==ptr->size-1)
    {
        printf("Queue is full\n");
    }
    else{
        ptr->ri++;
        ptr->arr[ptr->ri]= val;
    }
}
int dequeue(struct queue*ptr )
{
    int a=-1;
    if(ptr->fi==ptr->ri)
    {
        printf("The queue is empty\n");
    }
    else{
        ptr->fi++;
        a= ptr->arr[ptr->fi];
    }
    return a;
}
int main()
{
    struct queue* q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->ri=-1;
    q->fi=-1;
    q->arr=(int*)malloc(q->size* sizeof(int));
    enqueque(q,5);
    enqueque(q,7);
    enqueque(q,12);
    
    printf("DEqueing element %d",dequeue(q));
return 0;
}