#include <stdio.h> 
void fnc(int *i, int* j);
int main(){
    int a, b;
printf("enter the value of the 2 numbers\n");
scanf("%d %d",&a,&b);
fnc(&a,&b);
return 0; 
}
void fnc(int *i, int *j)
{
int *sum, *avg;
*sum = *i+ *j;
*avg = *sum/2;
printf(" the value of sum and average is %d %d ", *sum, *avg);
}