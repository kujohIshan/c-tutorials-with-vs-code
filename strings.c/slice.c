#include <stdio.h> 
void slice(char* st,int m, int n)
{
    int i=0;
    while ((m+1)<n)
    {
        st[i]= st[m+i];
        i++;
    }

}
int main(){
char st[]= "jaibhagwanshreeram";
slice(st, 3, 9);
printf("%s", st);
return 0; }