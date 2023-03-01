#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float r1,r2,e;
printf(" enter the values of a,b,c \n");
scanf("%d%d%d",&a,&b,&c);
printf(" the equation is : %dx^2 + %dx + %d= 0 \n",a,b,c);
D= (b*b) -4*a*c;
e=-(c/b)*1.0;
r1= (-b + sqrt(D))/(2*a);
r2= (-b - sqrt(D))/(2*a);
if(a == 0)
{
    printf(" No solution \n");
}
else if(a==0)
{
    printf(" there is only one real roots x=%f \n",e);
}
else if(D < 0)
{
    printf("There are no real roots \n");
}
else{
    printf(" athere are 2 real roots : %f and %f",r1,r2);
}
return 0;
}