#include <stdio.h> 
int fib(int n);
int main(){
    int n;
printf("enter the value of n \n");
scanf("%d", &n);
for(int i=0;i<n;i++){
printf(" %d ", fib(i) );
}
return 0; }
int fib(int n)
{
    int t;
    if( n==0)
    {
        return 0;
    }
    if(n== 1)
    {
    return 1;
    }
    else return  fib(n-1) +fib(n-2);

}