#include<stdio.h>
void toh(int n, char src, char des, char aux)
{
    if(n==1){
        printf("Move disk 1 form  rod %c to rod %c \n", src,des);
        return;
    }
    toh(n-1,src,aux,des);
    printf("Move disk %d from %c rod to %c rod\n",n,src, des);
    toh(n-1,aux,des,src);
}
int main()
{
    int n=4;
    toh(n,'A','C','B');
}