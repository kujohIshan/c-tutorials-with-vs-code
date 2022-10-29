#include <stdio.h> 

int main(){
char st[100];
int n=0,m=0,i=0;
printf("enter the value of string \n");
scanf("%s",& st); 
while (st[i]!= '\0')
{
if (st[i]=="z")
{
    n++;
}
else if(st[i]=="o")
{
    m++;
}
    i++;
}
if ((2*n)== m)
{
printf("yes");
}
else
{
    printf("No");
}
return 0; }