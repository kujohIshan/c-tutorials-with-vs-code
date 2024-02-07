#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}
int factorial(int n)
{
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1); 
}
int main()
{
    int p=factorial(5);
    printf("%d is the factorial ",p);
    int n;
    printf("\n");
    printf("Enter the number of terms you want in the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
   return 0;
}