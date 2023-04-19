#include <stdio.h> 
#include <math.h>
int pali(int n);
int main(){
int num,c=0 ,n,d;
printf("Enter the number to check\n");
scanf("%d",&num);
while (num>0)
{
d=num%10;
if (d==0)
{
c++;
}
num = num/10;
}
if (c>0)
{
printf("The number contains 0 not allowed \n");
}
else if (num<0)
{
    printf(" The number is negative which is not allowed \n");
}
else
{
n=pali(num);
if (n==1)
{
printf("The number is palindrome");
}
else
{
    printf("The number is not palindrome");
}

}

return 0; }
int pali(int n){
    int c=0,r;
    while (n>0)
    {
    r =n%10;
    c= (c*10) +r;
    n= n/10;
    }
    if (c==n)
    {
    return 1;
    }
    else
    {
        return 0;
    }
    
}