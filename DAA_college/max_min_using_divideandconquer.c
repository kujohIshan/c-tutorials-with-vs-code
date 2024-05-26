#include<stdio.h>
void max_min(int arr[],int *max_val, int *min_val,int l, int h)
{
    if (l==h)
    {
        *min_val= *max_val= arr[l];
        return ;
    }
    if (l==h-1)
    {
        if(arr[l]> arr[h]){
            *max_val=arr[l];
            *min_val=arr[h];
        }
        else{
            *min_val= arr[l];
            *max_val= arr[h];
        }
        return ;
    }
    int mid=(l+h)/2;
    int max1,min1;
    max_min(arr,max_val,min_val,l,mid);
    max_min(arr,&max1,&min1,mid+1,h);
    if (max1>*max_val)
    {
        *max_val=max1;
    }
    if(min1<*min_val){
        *min_val=min1;
    }
}
int main()
{
    int arr[8]={9,6,4,7,10,14,8,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max ,  min;
    max_min(arr, &max, &min, 0,n-1);
    printf("maximum is %d ", max);
    printf("minimmun is %d", min);
    return 0;
}