#include <stdio.h> 
float convert( int cel);
int main(){
    int c;
printf("enter the temp in celcius\n");
scanf("%d", &c);
printf(" temperature in celcius is %f \n", convert(c));
return 0; }
float convert( int cel)
{
    float f= 1.8*cel+32;
    return f;
}
