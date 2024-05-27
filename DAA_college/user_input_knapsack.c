#include<stdio.h>
#define Max 100
typedef struct array{
 int profit;
int weight;
}Items;
void swap(Items *a,Items *b)
{
  Items temp;
  temp= *a;
  *a=*b;
  *b=temp;
}
void sort(Items ar[], int n, float ratio[])
{
  float temp1;
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
        {
          if(ratio[j]<ratio[j+1])
          {
            temp1=ratio[j];
            ratio[j]=ratio[j+1];
            ratio[j+1]=temp1;

            swap(&ar[j],&ar[j+1]);
          }
        }
    }
}
int main()
{
  int n,M;
  Items arr[Max];
  float ratio[Max]={0.0};
  printf("Enter the number of items\n: ");
  scanf("%d",&n);
  printf("Enter the max capacity of the bag\n");
  scanf(" %d",&M);
  printf("Enter the profit and weight of each item\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d %d",&arr[i].profit, &arr[i].weight);
    }
  printf("the profit and weight of each item are\n");
  printf("profit \t weight \n");
  for(int i=0;i<n;i++)
    {
      printf("%d \t %1d \n",arr[i].profit,arr[i].weight);
    }
  for(int i=0;i<n;i++)
    {
      ratio[i]= (float)arr[i].profit/arr[i].weight;
    }
  // sort the profit and weight in accordance with the ratio
  sort(arr,n,ratio);
  float total_profit=0.0;
  int X[Max]={0};
  // knapsack
  for(int i=0;i<n;i++)
    {
      if(M==0)
      {
        break;
      }
      if(arr[i].weight<= M)// if the weight can be fully taken
      {
        total_profit+=arr[i].profit;
        M-=arr[i].weight;
        X[i]= 1;
      }
      else if(arr[i].weight>M && M>0) // if the weight cannot be taken fully
      {
        total_profit+= ratio[i]*M;
        M=0;
        X[i]=M;
      }
    }
  printf("Total_profit is % f \n",total_profit);
  printf("the selected Indexes are \n");
  for(int i=0;i<n;i++)
    {
      if(X[i]== 1)
        printf("%d ", i);
    }
  return 0;
}
