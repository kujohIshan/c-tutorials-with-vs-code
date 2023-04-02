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
if (pos<=0 || pos> size)
{
    printf(" Null");
}
else
{
for (int i = pos-1; i < size-1; i++)
{
ar[i]= ar[i+1];
}
size --;
for (int i = 0; i < size ; i++)
{
printf("%d ", ar[i]);
}
}

}
return 0; }