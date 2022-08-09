#include <stdio.h> 

int main(){
int err[3][3][3];
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
for (int k = 0; k < 3; k++)
{
printf("the address of err[%d][%d][%d] is %u \n", i,j,k, &err[i][j][k]);
}

}

}

return 0; 
}