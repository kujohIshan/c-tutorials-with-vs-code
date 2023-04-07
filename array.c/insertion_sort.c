#include <stdio.h> 

int main(){
int ar[50],temp,n,j;
printf(" Enter the size of array \n");
scanf("%d",&n);
printf(" enter the elements in array \n");
for (int i = 0; i < n; i++)
{
scanf("%d",&ar[i]);
}
printf(" the unsorted array is \n");
for (int i = 0; i < n; i++)
{
printf("%d ",ar[i]);
}
for (int i = 1; i <= n-1; i++)
{
temp= ar[i];
j=i-1;
while (j>=0 && ar[j]>temp )
{
    ar[j+1]= ar[j];
    j--;
}
ar[j+1]= temp;
}
printf("The array after sorting \n");
for (int i = 0; i < n; i++)
{
    printf("%d ",ar[i]);
}

return 0; }