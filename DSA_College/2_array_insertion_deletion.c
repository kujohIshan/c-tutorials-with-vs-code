#include<stdio.h>
#define max 100
int insert_at_pos(int arr[], int val, int p, int* size) {
    for (int i = *size - 1; i >= p - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[p - 1] = val;
    (*size)++;
    return *size;
}
int delete_at_pos(int arr[],int p, int* size)
{
    if(p<1 || p>= *size){
        printf("Invadil \n");
    }
    for (int i = p; i < *size -1; i++)
    {
        arr[i]= arr[i+1];
    }
    (*size)--;
    return *size;
}
int main()
{
    int arr[max],n, pos,val;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the elements in the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the arrray is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the positon and value \n");
    scanf("%d %d",&pos, &val );
    insert_at_pos(arr,val,pos,&n);
    printf("The array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}