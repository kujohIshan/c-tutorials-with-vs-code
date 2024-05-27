#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define v 5
int printmst(int parent[], int graph[v][v])
{
    printf("edge \t weight \n");
    for (int i = 1; i < v; i++)
    {
        printf("%d - %d \t %d \n",parent[i],i, graph[i][parent[i]]);
        
    }
    
}
void prims(int graph[v][v])
{
    int key[v]; // array to store minimum weight edge for each vertex 
    int parent[v]; // array to the mst edges
    bool mst[v]; //array to mark the included mst
    for (int i = 0; i < v; i++) 
    {
        key[i]= INT_MAX;
        parent[i]= -1;
        mst[i]= false;
    }
    key[0]=0;
    parent[0]=-1;
    for (int i = 0; i < v-1; i++) // a tree with v edges have v-1 vertex
    {
        int min=INT_MAX,u;
        //  find the min node
    for (int count = 0; count < v; count++)
    {
        if (key[count]< min && mst[count]==false)
        {
            u=count;
            min= key[count];
        }
    }
    // mark mst as true
    mst[u]=true;
    // check the adjecency matrix for the adjacent nodes 
    for (int j = 0; j < v; j++)
    {
        if(graph[u][j] && mst[j]==false && graph[u][j]<key[j])
        {
            parent[j]=u;
            key[j]=graph[u][j];
        }
    }
    }
    printmst(parent,graph);
    int total_weight=0;
    for (int i = 0; i < v; i++)
    {
        total_weight+=key[i];
    }
    printf("total wight is %d", total_weight);
}
int main()
{
    int graph[v][v]={{0,2,0,6,0},
                     {2,0,3,8,5},
                     {0,3,0,0,7},
                     {6,8,0,0,0},
                     {0,5,7,0,0} };

    prims(graph);
    return 0;
}