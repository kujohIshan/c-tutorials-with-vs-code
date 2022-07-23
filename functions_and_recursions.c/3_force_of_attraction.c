#include <stdio.h> 
float attraction(float mass);
int main(){
float mass;
printf("enter the mass of the body \n");
scanf("%f", &mass);
printf(" the force of attraction of body of mass %f is %0.2f \n" ,mass, attraction(mass));
return 0; }
float attraction(float mass)
{
    float force = mass*9.8;
    return force;
}