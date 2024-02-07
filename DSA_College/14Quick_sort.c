#include<stdio.h>
int swap(int*a,int*b)
{
    int temp= *a;
    *a=*b;
    *b= temp;
}
int partition(int *arr, int low, int high)
{
    int pivot=arr[low];
    int i=low;int j=high;
    while (i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]> pivot && j>=low)
        {
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    int par=j;
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int arr[50];
    int size;
    printf("Enter the size of the array \n");
    scanf("%d",&size);
    printf("Enter the elements in the array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the unsorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    quicksort(arr, 0, size - 1);
    printf("The sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}