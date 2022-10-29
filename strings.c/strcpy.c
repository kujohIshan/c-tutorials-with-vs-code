#include <stdio.h> 
#include <string.h>
int main()
{
char str1[]= "Ishan";
char target[30]= "jai shree ram";
strcpy(target, str1);
printf(" the new target is %s",target);    

return 0; }