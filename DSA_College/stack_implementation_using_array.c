#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack*ptr)
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
int main()
{
// struct stack s;
// s.size=80;
// s.top=-1;
// s.arr= (int *)malloc(s.size*sizeof(int));
// stack implementation using pointer array
struct stack *s=(struct stack *) malloc(sizeof(struct stack));
s->size=80;
s->top=-1;
s->arr=(int *)malloc(s->size* sizeof(int));
s->arr[0]= 7;
s->top++;
printf("the stack has been created successfully \n");

return 0;

}