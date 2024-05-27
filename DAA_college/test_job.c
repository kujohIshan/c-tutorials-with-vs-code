#include<stdio.h>
#include<limits.h>
#define Max 100
typedef struct job{
char id;
int dl;
int profit;
}Jobs;
int min(int a, int b)
{
       if(a>b)
    return b;
    else{
        return a;
    }
}
void sort(Jobs a[], int n)
{
    Jobs temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j].profit<a[j+1].profit)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
  Jobs arr[Max];
  int num;
  printf("Enter the number of jobs: ");
  scanf("%d",&num);
  printf("Enter the id deadline and profit: \n");
  for(int i=0;i<num;i++)
    {
        scanf(" %c",& arr[i].id);
        scanf("%d",& arr[i].dl);
        scanf("%d",&arr[i].profit); 
    }
  printf("%-7s\t %-10s \t %-7s\n", "JobId","Deadline","profit");
  for(int i=0;i<num;i++)
    {
      printf("%-7c \t %-8d \t %-5d\n",arr[i].id, arr[i].dl, arr[i].profit);
    }
    // sort the array
    sort(arr,num);
    int max_dl= INT_MIN;
    for (int i = 0; i < num; i++)
    {
        if (max_dl<arr[i].dl)
        {
            max_dl=arr[i].dl;
        }   
    }
    printf("Max deadline  %d\n", max_dl);
    // Jobsequence
    int total_profit=0;
    int filled=0;
    char sequence[Max]; 
    for (int i = 1; i <=max_dl; i++) // initializing char sequence with space
    {
        sequence[i]=' ';
    }
    for (int i = 1; i <=num; i++)
    {
        int k;
        k=min(max_dl,arr[i-1].dl);
        while(k>0)
        {
           if(sequence[k]==' ')
           {
            sequence[k]=arr[i-1].id;
            total_profit+=arr[i-1].profit;
            filled++;
            break;
           }
           k--;
        }
        if(filled==max_dl)
        break;
    }
    printf("Max profit is %d \n",total_profit);
    printf("Job ids selected are \n");
    for(int i=1;i<=max_dl;i++)
    {
        printf("%c ",sequence[i]);
    }
  return 0;
}