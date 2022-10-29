#include <stdio.h> 

int main(){
char st[69];
printf("enter the string \n");
scanf("%s",&st);
printf("the value of string is %s \n",st);
char *ptr =st;
int v=0;
while (*ptr !='\0')
{
    v++;
    ptr++;
}

printf(" the length is %d", v);
return 0; }