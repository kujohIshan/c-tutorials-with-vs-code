#include <stdio.h> 

int main(){
int a1[10][10],a2[10][10],n,re[10][10];
printf(" Enter the size os the array \n");
scanf("%d",&n);
printf(" Enter the elements in 1st array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
scanf("%d",&a1[i][j]);
}

}
printf(" Enter the elements in 2nd array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
scanf("%d",&a2[i][j]);
}

}
printf("  1st array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("%d \t",a1[i][j]);
}
printf("\n\n");
}
printf(" 2nd array \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("%d\t ",a2[i][j]);
}
printf("\n\n");
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
re[i][j]= a1[i][j] + a2[i][j];
}

}
printf(" the sum is \n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("%d\t ",re[i][j]);

}
printf("\n\n");
}
return 0; }