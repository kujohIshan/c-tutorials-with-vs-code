#include<stdio.h>
#define INF 10000
#define n 4
int min(int a, int b) {
    if(a>b)
    return b;
    else{
        return a;
    }
}
void printans(int matrix[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==INF){
                printf("%7s", "INF");
            }
            else{
            printf("%7d",matrix[i][j]);
            }
        }
        printf("\n");
    }
    
}
void floyed(int dist[][n])
{
    for(int via=0; via <n; via ++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dist[i][j]= min(dist[i][j], dist[i][via]+dist[via][j]);
            }
            
        }
        
    }
    printans(dist);
}
int main()
{
    int graph[n][n]=  {{0, 2, INF, INF},
                       {1, 0, 3, INF}  ,
                       {INF, INF, 0,INF},
                       {3, 5, 4, 0}  }; 
//  floyed warshal algo
    floyed(graph);
    return 0;
}