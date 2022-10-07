#include <stdio.h> 
#include <string.h>
int main(){
char st1[34];
char st2[34];
char c;
int i=0;
printf("enter the first string\n");
scanf("%s",st1);
printf("enter the value of the second string charecter by charecter \n");

while(c!= '\n')
{
    fflush(stdin);
    scanf("%c",&c);
    printf("%c", c);
    st2[i] = c;
    i++;
}
st2[i] = '\0';
printf("the value of the first string is %s \n", st1);
printf("the value of the second string is %s \n", st2);
return 0;}