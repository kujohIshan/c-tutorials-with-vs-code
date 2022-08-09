#include <stdio.h> 
void table(int *multable, int num);
int main(){
int multable[3][10];
table( multable[0], 2 );
table(multable[1],9);
table(multable[2],7);

return 0; }
void table(int *multable, int num )
{
    
for (int i = 0; i < 10; i++)
{
multable[i]= num*(i+1);
}
for (int i = 0; i < 10; i++)
{
printf(" %d X %d =  %d\n",num, (i+1), multable[i]);
}

}