#include <stdio.h> 
int is_armstrong(int num)
{
 int sum=0,d,n;
 n=num;
 while (num>0)
 {
d=num%10;
sum= sum+ (d*d*d);
num=num/10;
 }
if (sum==n)
{
return 0;
}
else
{
    return 1;
}  
}
int main(){
int num,s;
printf(" Enter the number \n");
scanf("%d",&num);
if (num>=100 && num<=999)
{
if (is_armstrong(num)==0)
{
printf("%d true",num);
}
else
{
    printf(" false");
}

}
else
{
printf("out of bound");
}

return 0; }