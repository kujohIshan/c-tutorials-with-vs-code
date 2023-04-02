#include <stdio.h> 
int main(){
int ar[50],size, num, pos;
printf(" enter the size of the array \n");
scanf("%d",&size);
if (size> 50)
{
    printf(" out of bound \n");
}
else
{

printf(" enter the array \n");
for (int i = 0; i < size; i++)
{
scanf("%d",& ar[i]);
}
printf(" The array is  \n");
for ( int i =0 ; i < size; i++)
{
printf("%d ", ar[i]);
}
printf("\n");
printf(" enter the position \n");
scanf("%d",&pos);
printf(" enter the number \n");
scanf("%d",&num);
for (int i = size -1; i >= pos-1; i--)
{
ar[i+1]= ar[i];
}
ar[pos-1]= num;
size ++;

for (int i = 0; i < size ; i++)
{
printf("%d ", ar[i]);
}

}
return 0; }