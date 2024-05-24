#include<stdio.h>
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
void swapINT(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void descending(int n, int p[], int w[],float ratio[])
{
    for (int i = 0; i < n-1 ;i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(ratio[j]<ratio[j+1]){
                swap(&ratio[j],&ratio[j+1]);
                swapINT(&p[j],&p[j+1]);
                swapINT(&w[j],&w[j+1]);
            }
        }   
    }
}
int main()
{
    int M=15,n=7;
    float t_profit= 0.0;
    int p[7]={10,5,15,7,6,18,3};
    int w[7]={2,3,5,7,1,4,1};
    float ratio[7]; // Profit-to-weight ratio
    int X[7] = {0};
    for (int i = 0; i < n; i++) {
        ratio[i] = (float)p[i] / w[i];
    }
    descending(n,p,w,ratio);
    // knapsack
    for (int i = 0; i < n; i++)
    {
        if(M==0) 
        break;
        if(w[i]<=M)  // if the item can be fully taken
        {
            t_profit+=p[i];
            M-=w[i];
            X[i]=1;
        }
        // if the item cannot be taken fully
        else{
            t_profit+=ratio[i]*M;
            M=0;
            X[i]=M;
        }
    }
    printf("Total profit : % 2.f",t_profit);
    printf("\n");
    printf("Indexes of selected items: ");
    for (int i = 0; i < n; i++) {
        if (X[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}