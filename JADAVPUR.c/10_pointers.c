#include <stdio.h> 
void swap(int*x, int *y)
{
    int temp =*x;
    *x =*y;
    *y = temp;
    return;
}
int main(){
int n1,n2,n3,n4;
printf("Enter the numbers \n");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
int *p1=&n1,*p2=&n2,*p3=&n3,*p4=&n4;
printf(" address of the 1st and 2nd number before swapping is %u and %u \n",p1,p2);
printf("the value of ist and 2nd term before swapping %u and %u \n",*p1,*p2);
swap(&n1,&n2);
printf("the value of ist and 2nd term after swapping %u and %u \n",n1,n2);
printf(" address of the 1st and 2nd number after swapping is %u and %u \n",p1,p2);
printf(" address of the 2nd and 3rd number before swapping is %u and %u \n",p2,p3);
printf(" value of the 2nd and 3rd number before swapping is %u and %u \n",n2,n3);
swap(&n2,&n3);
printf(" value of the 2nd and 3rd number after swapping is %u and %u \n",n2,n3);
printf(" address of the 2nd and 3rd number after swapping is %u and %u \n",p2,p3);
return 0; }