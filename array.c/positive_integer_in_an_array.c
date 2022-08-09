#include <stdio.h> 
int count(int *arr ,int n);
int main(){
int arr[10]= {12,-14,5,4,-9,-7,6,-2,-6,-1};
for(int i=0; i< 10; i++)
{
printf("the array is %d \n", arr[i]);
}
printf(" the positive integers are %d \n", count( arr,10));
return 0; 
}
int count(int *arr ,int n)
{
    int c=0;
    int i;
for ( i = 0; i < n; i++)
{
if (arr[i]>0)
{
c++;
}

}
return c;
}