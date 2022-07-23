#include <stdio.h> 
int average(int a, int b, int c);
int main(){
    int x,y,z;
printf(" enter the 3 numbers \n");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);
int avgg= average(x,y,z);
printf("the average of %d, %d ,%d are %d \n", x,y,z,avgg);

return 0; }
int average(int a, int b, int c)
{
    int avg =(a+b+c)/3;
    return avg;
}