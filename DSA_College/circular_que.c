#include<stdio.h>
#include<stdlib.h>
struct cque{
int size;
int f;
int r;
int *arr;
};
int isfull(struct cque *ptr)
{
  if ((ptr->r+1)%ptr->size== ptr->f){
    return 1;
  }
  else{
    return 0;
  }
}
int isempty(struct cque*ptr)
{
  if(ptr->r==ptr->f){
    return 1;
  }
  else{
    return 0;
  }
}
void enque(struct cque*ptr,int m)
{
  if(isfull(ptr)){
    printf("This queue is full \n ");
  }
  else{
    ptr->r= (ptr->r+1)%ptr->size;
    ptr->arr[ptr->r]=m;
    printf("The enqued value is %d \n",m);
  }
}
int delete(struct cque*ptr)
  {
  int a=-1;
  if(isempty(ptr))
  {
  printf("This QUEUE is empty \n");
  }
else{
  ptr->f=(ptr->f+1)%ptr->size;
  a= ptr->arr[ptr->f];
}
return a;
  }
int main()
{
  struct cque *CQ=(struct cque*) malloc(sizeof(struct cque));
  CQ->size=4;
  CQ->f= 0;
  CQ->r= 0;
  CQ->arr=(int *)malloc(CQ->size*sizeof(int));
  enque(CQ,5);
  enque(CQ,12);
  enque(CQ,13);
  // printf("Deleting from queue %d\n",delete(CQ));
  // printf("Deleting from queue %d\n",delete(CQ));
  // printf("Deleting from queue %d\n",delete(CQ));
  if(isfull(CQ)){
    printf("Queue is full \n");
  }
  else if(isempty(CQ)){
    printf("Queue is empty \n");
  }
  
  return 0;
}