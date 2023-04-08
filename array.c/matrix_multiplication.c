#include <stdio.h> 

int main(){
int a1[10][10],a2[10][10],n,cl,sum=0,re[10][10];
printf(" Enter the row and column of the array \n");
scanf("%d%d",&n,&cl);
printf(" Enter the elements in 1st array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < cl; j++)
{
scanf("%d",&a1[i][j]);
}

}
printf(" Enter the elements in 2nd array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < cl; j++)
{
scanf("%d",&a2[i][j]);
}

}
printf("  1st array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < cl; j++)
{
printf("%d \t",a1[i][j]);
}
printf("\n\n");
}
printf(" 2nd array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < cl; j++)
{
printf("%d\t ",a2[i][j]);
}
printf("\n\n");
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < cl; j++)
{
for (int k = 0; k < n; k++)
{
sum+= a1[i][k]*a2[k][j];
}
re[i][j]= sum;
sum=0;
}

}
printf(" the matrix is \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("%d \t",re[i][j]);

}
printf("\n\n");
}
return 0; }