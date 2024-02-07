#include<stdio.h>
#define  max  5
int stack[max] ,top=-1;
void insert(int val)
{
    if(top== max-1){
        printf("Overflow \n");
    }
    else{
        top++;
        stack[top]= val;
    }
}
void pop()
{
    int v;
    if(top == -1){
        printf("Underflow \n");
    }
    else{
        stack[top]= v;
        top--;
        printf("The value poped is  %d ", v);
    }
}
void display()
{
        if(top==-1)
    {
        printf("The stack is empty \n");
    }
    else{
        for(int i=0;i<=top;i++)
        {
            printf( "%d \n",stack[i]);
        }
    }
}
int main()
{
    insert(5);
    insert(6);
    display();
    return 0;
}