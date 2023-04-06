#include <stdio.h> 

int main(){
int ar[10],swap, temp;
printf(" enter the array \n");
for (int i = 0; i < 10; i++)
{
scanf("%d",&ar[i]);
}
for (int i = 0; i < 10-1; i++)
{
for (int j = 0; j < 10-i-1; j++)
{
if (ar[j]>ar[j+1])
{
    temp = ar[j];
    ar[j]= ar[j+1];
    ar[j+1]= temp;
}
}
}
printf("The sorted array is \n");
 for (int i = 0; i <10; i++)
 {
printf("%d",ar[i]);
 }
 
return 0; }