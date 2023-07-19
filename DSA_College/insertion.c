#include<stdio.h>
int main()
{
    int arr[100];
    int n,p ;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the elements in the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is \n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    // now doing the insertion
    printf("Enter the position \n");
    scanf("%d",&p);
    for (int i = n; i >= p; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[p]=69;

     for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}