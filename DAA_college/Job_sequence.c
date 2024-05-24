#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 100
typedef struct job{
    char id ;
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

// sort the jobs in dec order of profits
void sort(Job jobs[], int n)
{
    Job temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(jobs[j].profit<jobs[j+1].profit)
            {
                temp=jobs[j];
                jobs[j]=jobs[j+1];
                jobs[j+1]=temp;
            }
        }   
    }
    printf("the sorted jobs are \n");
    printf("%s \t %s\t %s \n","Job id", "profit", "deadline");
    for (int i = 0; i < n; i++)
    {
        printf("%c\t %d\t %d \n",jobs[i].id,jobs[i].profit,jobs[i].dl);
    }
}

int main()
{
    Job arr[]={{'a', 2, 100},
               {'b', 1, 19},
               {'c', 2, 27},
               {'d', 1, 25},
               {'e', 3, 15} };
    int n= sizeof(arr)/sizeof(arr[0]);   
    sort( arr, n);
    int maxi_d=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].dl>maxi_d){
            maxi_d= arr[i].dl;
        }
    }
    printf("Max deadline %d\n",maxi_d);
// job sequence problem
    char sequence[MAX];
    int max_profit= 0;
    int filledTimeSlot = 0;
   for (int i = 1; i <= maxi_d; i++) // array indices from 1 to 3 
   {
     sequence[i]=' ';// assing the array of the size of the maximum deadline and initializing it with space
   }
   for (int i = 1; i <= n; i++)
   {
    int k= min(maxi_d,arr[i-1].dl); // take the min value betwen the maximum deadline and the assigned deadline
    while (k>0)
    {
        if (sequence[k]== ' ')
        {
            sequence[k]= arr[i-1].id;
            filledTimeSlot++;
            max_profit += arr[i-1].profit;
            break;
        }
        k--;
    }
    if(filledTimeSlot==maxi_d)
    break;
   }
   printf("Max profit is %d \n ",max_profit);
   printf("The required job ids are");
   for (int i = 1; i <= maxi_d; i++)
   {
    printf(" %c ",sequence[i]);
   }
   
   return 0;
}