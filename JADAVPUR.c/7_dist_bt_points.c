#include <stdio.h> 
#include <math.h>
float dist(int X1, int X2,int Y1,int Y2)
{
int d,i,j,l;
float  s;
i= (X1-X2); j=(Y1-Y2);
l=pow(i,2);
d=pow(j,2);
s=sqrt(l+d);
return s;
}
float area(int X1,int X2,int X3,int Y1, int Y2,int Y3)
{
    float s1,s2,s3,S,ar;
    float A;
    s1=dist(X1,X2,Y1,Y2);
    s2=dist(X2,X3,Y2,Y3);
    s3=dist(X3,X1,Y3,Y1);
    S=(s1+s2+s3)/2;
    ar=S*(S-s1)*(S-s2)*(S-s3);
    A=sqrt(ar);
  
    return A;
}
int point(int a1,int a2,int X1,int X2,int X3,int Y1, int Y2,int Y3)
{
 float A1,A2,A3,A;
  float t;
  A= area(X1,X2,X3,Y1,Y2,Y3);
  A1 = area(a1,X1,X2,a2,Y1,Y2);
  A2 = area(a1,X2,X3,a2,Y2,Y3);
  A3 =  area(a1,X3,X1,a2,Y3,Y1);
  t =A1+A2+A3;
  printf("%f %f %f %f \n",A1,A2,A3,t);
  if(fabs(t-A)<0.00001)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main(){
int x1,x2,x3,y1,y2,y3,a1,a2,m;
float ar;
printf("Enter the 1st coordinates\n");
  scanf("%d%d",&x1,&y1);
    printf("Enter the 2nd coordinates\n");
  scanf("%d%d",&x2,&y2);
  printf("Enter the 3rd coordinates\n");
  scanf("%d%d",&x3,&y3);
  printf("Enter the coordinates to check\n");
  scanf("%d %d",&a1,&a2);
  ar=area(x1,x2,x3,y1,y2,y3);
  m= point(a1,a2,x1,x2,x3,y1,y2,y3);
printf(" the area of the triangle is %f\n", ar);
  if(m==1)
  {
    printf("the point lies inside the triangle \n");
  }
  else{
    printf("the point does not lies inside the triangle");
  }
return 0; }