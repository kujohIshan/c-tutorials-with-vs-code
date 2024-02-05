#include<stdio.h>
#include<stdlib.h>
#define max 5
queue[2][max];
int front =-1;
int rear= -1;
void insert(int val, int p){
    if (rear==max-1){
        printf("The queue is full \n");
    }
    if(front== -1 && rear== -1){
        front++;
        rear++;
    }
    else{
        rear++;
    }
        queue[0][rear]= p;
        queue[1][rear]=val;
}
void sortpri()
{
    int i,j, tempri, tempval;
    for (int i = 0; i <= rear ; i++)
    {
        for (int j = i+1; j <= rear; j++)
        {
           if(queue[0][i]> queue[0][j]){
            // swap priorities
            tempri=queue[0][i];
            queue[0][i]= queue[0][j];
            queue[0][j]=tempri;
            // swap values
            tempval = queue[1][i];
            queue[1][i] = queue[1][j];
            queue[1][j] = tempval;
           }
        }
        
    }
    
}
void display()
{
    if(front==-1 || front>= rear){
        printf("The queue is empty \n");
    }
    sortpri();
    printf("Priority\tValue\n");
    for (int i = front; i <= rear; i++) {
     printf("%d\t\t%d\n", queue[0][i], queue[1][i]);
    }

}
int main()
{
    insert(10,2);
    insert(42,1);
    insert(20,3);
    display();
    return 0;
}