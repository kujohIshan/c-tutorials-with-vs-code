#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int *arr;
    int top;
};
int isempty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack* ptr)
{
    if(ptr->top >= ptr-> size -1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr , int value)
{
    if (isfull(ptr))
    {
        printf("Stack is overflow \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= value;
    }
}
int pop(struct stack*ptr )
{
    if(isempty(ptr))
    {
        printf("Stack underflow \n");
        return -1;
    }
    else{
        
       int val= ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}
int main()
{
    struct stack *st=(struct stack*) malloc(sizeof(struct stack));
    printf("Enter the size of the stack \n");
    scanf("%d",&st->size);
    st->top =-1;
    st->arr=(int*) malloc(st->size * sizeof(int));
    printf("Before pushing \n");
    printf("%d \n",isempty(st));
    printf("%d \n",isfull(st));
    printf("After push \n");
    push(st,34);
    push(st,45);
    push(st,69);
     printf("%d \n",isempty(st));
    printf("%d \n",isfull(st));
    printf(" Popped %d from the stack \n", pop(st));
    printf(" Popped %d from the stack \n", pop(st));
    return 0;
}