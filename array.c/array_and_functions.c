#include <stdio.h> 
void printarray(int*ptr , int n)
{
    for (int i = 0; i < n; i++)
    {
    printf(" the value of elements %d is %d \n ", i+1, *(ptr+i));
    }
    
}
int main(){
int arr[] = {18 ,58,69,25,54,85,25};
printarray(arr , 7);
return 0; }