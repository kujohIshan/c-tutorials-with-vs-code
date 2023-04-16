#include <stdio.h> 
#include<math.h>
int bintodec(int b)
{
int dig ,pwr=0,de=0;
while (b>0)
{
dig= b%10;
de= de+ (dig*pow(2,pwr) );
pwr++;
b=b/10;
}
return de;
}
int dectobin(int de)
{
    int b=0, pwr=1,p;
    while (de>0)
    {
        p= de%2;
        b= b+ p*pwr;
        pwr=pwr*10;
        de/=2;
    }
    return b;
}
int dec2oct(int d)
{
    int oc=0,p,pwr=1;
    while (d>0)
    {
    p= d%8;
    oc= oc+ p*pwr;
    pwr= pwr*10;
    d=d/8;
    }
    return oc;
}
int oct2dec(int oc)
{
    int oct=0,pwr=0, p;
    while (oc>0)
    {
    p= oc%10;
    oct= oct+ (p* (pow(8,pwr)));
    pwr++;
    oc/=10;
    }
    return oct;
}
int main(){
int c,n,p;
printf(" press 1 for binary to decimal \n press 2 for decimal to binary \n press 3 for octal to decimal \n press 4 for decimal to octal\n press 5 for binary to octal \n press 6 for octal to binary\n");
scanf("%d",&c);
switch (c)
{
case 1:
    printf("Enter the binary number \n");
    scanf("%d",&n);
    printf(" The equivalent decimal is %d :",bintodec(n));
    break;
case 2:
 printf("Enter the decimal number \n");
 scanf("%d",&n);
 printf(" The equivalent binary is %d : ",dectobin(n));
 break;
case 3:
 printf("Enter the octal number \n");
 scanf("%d",&n);
 printf(" the equivalent decimal is %d :",oct2dec(n));
 break; 
 case 4:
  printf("Enter the decimal number \n");
 scanf("%d",&n);
 printf(" the equivalent octal is %d :",dec2oct(n));
 break;
 case 5:
  printf("Enter the binary number \n");
 scanf("%d",&n);
 p =bintodec(n);
 printf(" the equivalent octal is %d :",dec2oct(p));
 break;
 case 6:
  printf("Enter the octal number \n");
 scanf("%d",&n);
 int m= oct2dec(n);
 printf(" the equivalent binary is %d :",dectobin(m));
 break;
default:
printf(" wrong choice \n");
    break;
}

return 0; }