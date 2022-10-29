#include <stdio.h> 
#include <string.h>
int main(){
char str[25]= "hell";
char st[25] = "hezlo";
int val = strcmp(str,st);
printf("the value is %d", val);
return 0; }