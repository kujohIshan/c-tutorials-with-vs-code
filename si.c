#include <stdio.h> 

int main()
{
    int p,t;
    float r;
    printf("enter the principal amount \n");
    scanf("%d", &p);
    printf("enter the time \n");
    scanf("%d", &t);
    printf("enter the rate \n");
    scanf("%f", &r);
    printf("the simple interest is %f \n", (p*r*t)/100);
return 0; 
}