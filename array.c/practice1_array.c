#include <stdio.h> 

int main(){
int arr[10]={8,95,874,54,97,65,42,69,21,11};
int* ptr= &arr[0];
if (*(ptr+2) == arr[2])
{
printf("they are same" );
}
else
{
    printf("they are not  same" );
}
return 0; }