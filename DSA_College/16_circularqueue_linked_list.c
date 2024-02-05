#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue* next;
};
struct queue* front=NULL;
struct queue* rear=NULL;
void enqueue(int p)
{
 struct queue* newnode= (struct queue*) malloc(sizeof(struct queue));
 newnode->data=p;
 newnode->next=0;
 if(front==NULL && rear== NULL){
    front=rear=newnode;
    rear->next=front;
 }
 else{
    rear->next=newnode;
    rear=newnode;
    rear->next= front;
 }
}
void deque()
{
    struct queue* temp;
    if((front==NULL)&&(rear==NULL))  // checking whether the queue is empty or not  
    {  
        printf("\nQueue is empty \n");  
    }  
    else if(front == rear){
        temp=front;
        front = rear= NULL;
        free(temp);
    }
    else  
    {  
        temp=front;
        front=front->next;  
        rear->next=front;  
        free(temp);  
    }   
}
void display()
{
    struct queue* temp = front;
    if(front==NULL && rear== NULL){
        printf("Queue is empty ");
    }
    else{
        printf("Elements in the queue \n");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }
}
int main()
{
    enqueue(34);   
    enqueue(10);  
    enqueue(23);  
    display(); 
    deque();
    display();
    return 0;
}