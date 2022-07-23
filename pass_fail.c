#include <stdio.h> 
int main()
{
int p,c,m;
printf("enter the marks of physics\n");
scanf("%d", &p);
printf("enter the marks of chemistry\n");
scanf("%d", &c);
printf("enter the marks of math\n");
scanf("%d", &m);
int total = (p+c+m)/3;
if (p>=33 && c>=33 && m>=33 && total >=40)
{
printf("the student has passed \n");
}
else
{
    printf("the student has failed \n");
}

    return 0; 
}