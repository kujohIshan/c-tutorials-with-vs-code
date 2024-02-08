#include <stdio.h> 

int main(){
int ar[50],n,temp,index_min;
printf(" Enter the size \n");
scanf("%d",&n);
printf(" Enter the array \n");
for (int i = 0; i <n; i++)
{
scanf("%d",&ar[i]);
}
printf(" the unsorted array is\n");
for (int i = 0; i <n; i++)
{
    printf("%d",ar[i]);
}
// selection sort
for (int i = 0; i <n-1; i++)
{
 index_min= i;
for (int j = i+1 ; j < n; j++)
{
    if (ar[j]<ar[index_min])
    {
        index_min=j;
    }
}
    temp = ar[i];
    ar[i] = ar[index_min];
    ar[index_min]=temp;
}

printf(" The sorted array is \n");
for (int i = 0; i < n; i++)
{
    printf("%d",ar[i]);
}
return 0; }