#include<stdio.h>
#define max 5
int stack[max],top=-1;
int isfull()
{
    if (top == max-1)
    {
     return 1;
    }
    else{
        return 0;
    }
}
int isempty()
{
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push( int val)
{
 if (isfull())
 {
    printf(" \n The stack is full");
 }
 else{
    top++;
    stack[top]=val;
    printf("Pushed %d onto the stack.\n", val);
 }
 
}
void pop ()
{
    if(isempty()){
        printf("\n The stack is empty");
    }
    else{
        int v = stack[top];
        top--;
        printf("Poped %d from the stack.\n", v);
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
    int n,option;
    do{
    printf("enter choices'\n' 1 for 'insert' '\n' 2 for 'pop' '\n' 3 for 'display' '\n' 4 for checking 'is full' '\n' 5 for checking 'is empty' '\n' 6 for 'exit' ");
    printf("\n Enter your choice \n ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the value to be inserted \n ");
        int val;
        scanf("%d",&val);
        push(val);
        break;
    case 2:
        pop();
        break;
    case 3: 
      display();
      break;
    case 4:
         if (isfull())
             printf("The stack is full.\n");
        else
            printf("The stack is not full.\n");
        break;
    case 5:
       if (isempty())
            printf("The stack is empty.\n");
       else
          printf("The stack is not empty.\n");
        break;
    default:
        break;
    }
    }
    while (option!=6);
    return 0;
}