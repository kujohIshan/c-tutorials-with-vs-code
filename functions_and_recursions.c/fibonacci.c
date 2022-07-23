#include <stdio.h> 
int fib(int n);
int main(){
    int n;
printf("enter the value of n \n");
scanf("%d", &n);
printf("the %d fibonacci term is %d \n", n, fib(n) );
return 0; }
int fib(int n)
{
    int t;
    if( n==1)
    {
        return 0;
    }
    if(n== 2)
    {
    return 1;
    }
    else return  t = fib(n-1) +fib(n-2);

}