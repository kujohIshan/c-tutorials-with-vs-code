#include<stdio.h>
struct employe{
    int code;
    char name[100];
    float salary;
    
};
int main()
{
 struct employe e[5];
 printf("Enter the credentials of the employee \n");
 printf("Enter the code of all employes \n");
 for (int i = 0; i < 3; i++)
 {
    scanf("%d",&e[i].code);
 }
 printf("enter the name of all the employess \n");
  for (int i = 0; i < 3; i++)
 {
    scanf("%s",&e[i].name);
 }
 printf("Enter the names of the employess \n");
  for (int i = 0; i < 3; i++)
 {
    scanf("%f",&e[i].salary);
 }
 for (int i = 0; i < 3; i++)
 {
    printf("%d ",e[i].code);
    printf("%s ",e[i].name);
    printf("%f ",e[i].salary);
 }
 return 0;
}