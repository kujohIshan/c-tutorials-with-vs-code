#include<stdio.h>
#include<limits.h>
#define Max 100
typedef struct job{
    char id;
    int dl;
    int profit;
} Job;
int min(int a, int b) {
    if(a>b)
    return b;
    else{
        return a;
    }
}
void sort(Job arr[], int n)
{
    Job temp;
    for(int i=0;i<n-1;i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j].profit<arr[j+1].profit)
            {
                temp=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
            
        }     
    }
        
}
int main()
{
    Job arr[Max];
    int n;
    printf("Enter the no.of elements\n");
    scanf("%d",&n);
    printf("Enter the id deadline and profits \n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",& arr[i].id);
        scanf("%d",& arr[i].dl);
        scanf("%d",&arr[i].profit); 
    }
    printf("%-7s \t %-10s\t %--7s\n","Jobid", "deadline","profit");
    for (int i = 0; i < n; i++) {
        printf(" %c \t  %d \t  %d \n", arr[i].id, arr[i].dl, arr[i].profit);
    }
    // sort the array in decreasing
    sort(arr,n);
    printf("\nAfter sorting:\n");
    printf("%-7s %-10s %-7s\n", "Jobid", "Deadline", "Profit");
    for (int i = 0; i < n; i++)
    {
        printf("%-7c %-10d %-7d\n", arr[i].id, arr[i].dl, arr[i].profit);
    }
    // finding the max deadline
    int max_dl=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].dl>max_dl)
        max_dl=arr[i].dl;
    }
    printf("The max deadline is %d \n",max_dl);
    // Job sequence
    int total_profit=0;
    int filledtime=0;
    char sequence[Max];
    // initilize the sequence with space
    for (int i = 1; i <= max_dl; i++)
    {
        sequence[i]=' ';
    }
    for (int i = 1; i <=n; i++)
    {
        int k;
        // taking the min between maximum deadline and the current deadline
       k=min(max_dl,arr[i-1].dl);
        while(k>=0)
        {
           if(sequence[k]==' ')
           {
            sequence[k]= arr[i-1].id;
            total_profit+=arr[i-1].profit;
            filledtime++;
            break;
           }
            k--;
        }
        if(filledtime==max_dl)
        break;
    }
    printf("max profit is %d\n",total_profit);
    printf("The required job ids are");
    for (int i = 0; i < max_dl; i++)
    {
        printf(" %c ",sequence[i+1]);    
    }
    return 0;
}