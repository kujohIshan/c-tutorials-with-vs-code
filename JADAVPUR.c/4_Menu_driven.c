#include <stdio.h> 
int sum(int a, int b)
{
    int s= a+b;
    return s;
}
int diff(int a, int b)
{
    int di= a-b;
    return di;
}
int product(int a, int b)
{
    int p =a*b;
    return p;
}
int div(int a, int b)
{
    int dv =a/b;
    return dv;
}
int mod(int a, int b)
{
    int mo= a%b;
    return mo;
}
int main(){
int a,b;
char choice;
printf(" enter the numbers\n");
scanf(" %d %d",&a,&b);
printf(" enter operation \n") ;
scanf(" %c",& choice);
switch (choice)
{
case '+':
    printf(" for %c operation of %d and %d  is %d",choice ,a,b ,sum(a,  b));
    break;
case '-':
printf(" for %c operation of %d and %d is %d", choice,a,b, diff( a,  b) );
break;
case '*':
printf("for %c operation of %d and %d is %d", choice,a,b, product( a,  b) );
break;
case '/':
printf("for %c operation of %d and %d is %d", choice,a,b, div( a,  b) );
break;
case '%':
printf("for %c operation of %d and %d is %d", choice,a,b, mod( a,  b) );
break;
default:
printf(" wrong choice");
    break;
}
return 0; }