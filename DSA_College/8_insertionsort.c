#include<stdio.h>
int main()
{
    int arr[10],size,key;
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
    // insertion sort
    for (int i = 1; i <size; i++)
    {
        key = arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]= arr[j];
            j=j-1;
        }
        arr[j+1]= key;
    }
    printf("The sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}