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
    // now doing the deletion
    printf("\n Enter the position \n");
    scanf("%d",&p);
    for (int i =p-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }

     for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}