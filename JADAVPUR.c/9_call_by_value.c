#include <stdio.h> 
void max(int n1,int n2,int n3)
{
    int m;
    if (n1>n2 && n1>n3)
    {
    m=n1;
    }
    else if (n2>n1 && n2>n3)
    {
        m= n2;
    }
    
    else
    {
        m= n3;
    }
    printf("The msximum number is %d \n",m);
    
}
int main(){
int num1,num2,num3;
printf("Enter the numbers\n");
scanf("%d %d %d",&num1,&num2,&num3);
max(num1,num2,num3);

return 0; }