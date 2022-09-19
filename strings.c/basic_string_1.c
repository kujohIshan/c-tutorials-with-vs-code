#include <stdio.h> 

int main(){
char str[]= "Ishan";
char *ptr = str;
while(*ptr!= '\0')
{
printf("%c", *ptr);
ptr++ ;
}
return 0; 
}