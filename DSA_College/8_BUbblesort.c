#include<stdio.h>
int main()
{
    int arr[10],size,temp;
    printf("Enter the number tof size of the array \n");
    scanf("%d",&size);
    printf("Enter the elements in the array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The unsorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // bubble sort
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j <size -1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
     printf("The sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}