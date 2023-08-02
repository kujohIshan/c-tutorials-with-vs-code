#include<stdio.h>
#include<stdlib.h>
int value;
 struct stack
{
int size;
int * arr;
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
  int isfull(struct stack*ptr)
{
  if(ptr->top >=0)
  {
    return 1;
  }
  else{
    return 0;
  }
}
void push(struct stack*ptr)
{
  if(ptr->top>= ptr->size -1)
  {
    printf("The stack is over flow \n");
  }
   else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&value);
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
void pop(struct stack*ptr)
{
  if(ptr->top==-1)
  {
    printf("The stack is underflow \n");
  }
   else
    {
        int value=ptr->arr[ptr->top];
      printf(" the poped value is %d \n",value);
      ptr->top--;
    }
}
void display(struct stack*ptr)
{
  if(ptr->top>=0)
  {
    printf("Elements of the stack is \n");
    for(int i= ptr->top; i>=0;i--)
      {
        printf("%d \n",ptr->arr[i]);
      }
  }
   else
        {
            printf("\n The STACK is empty");
        }
}
int main()
{
  struct stack *st=(struct stack*) malloc(sizeof(struct stack));
  printf("Enter the size of the stack \n");
  scanf("%d",&st->size);
  st->top=-1;
  st->arr=(int *) malloc(st->size *sizeof(int));
  int choice;
  do{
  printf("Enter the choices \n 1 for push \n 2 for pop \n 3 for display \n 4 for empty check \n 5 for full check \n 6 to exit \n");
  scanf("%d",&choice);
    switch(choice)
      {
        case 1:
          {
            push(st);
            break;
          }
         case 2:
            {
                pop(st);
                break;
            }
         case 3:
            {
                display(st);
                break;
            }
         case 4:
            {
                 printf("%d \n",isempty(st));
                break;
            }
        case 5:
            {
                 printf("%d \n",isfull(st));
                break;
            }
         case 6:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
            }
      }
      
  }
    while(choice <=6);
  return 0;
}