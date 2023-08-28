#include<stdio.h>
#include<stdlib.h>
struct DEque{
int size;
int f;
int r;
int *arr;
};
int isfull(struct DEque* ptr){
  if((ptr->r== ptr->size-1 && ptr->f==0 )|| (ptr->f==ptr->r+1))
  {
    return 1;
  }
  else{
    return 0;
  }
}
int isempty(struct DEque* ptr){
  if(ptr->f== -1){
    return 1;
  }
  else{
    return 0;
  }
}
void insertfront(struct DEque*ptr,int val)
{
  if(isfull(ptr)){
    printf("The queue is full \n");
  }
  else if(ptr->f==-1 && ptr->r==-1){
    ptr->f=0;
    ptr->r=0;
  }
  else if(ptr->f==0){
    ptr->f= ptr->size-1;
  }
  else{
    ptr->f--;
  }
  ptr->arr[ptr->f]= val;
  printf("The enqued value at front is %d \n",val);
}
void insertback(struct DEque*ptr,int val)
{
  if(isfull(ptr)){
    printf("the queue is full\n");
  }
  else if(ptr->f==-1 && ptr->r==-1){
     ptr->f=0;
    ptr->r=0;
     ptr->arr[ptr->r]=val;
  }
  else if(ptr->r==ptr->size-1){
     ptr->r=0;
     ptr->arr[ptr->r]=val;
  }
  else{
    ptr->r++;
     ptr->arr[ptr->r]=val;
  }
    printf("The enqued value at back is %d \n",val);
  
}
int deletefront(struct DEque*ptr){
  int a=-1;
  if(isempty(ptr)){
    printf("The queue is empty \n");
  }
  else if(ptr->f==ptr->r){
    ptr->f=-1;
    ptr->r=-1;
    a=ptr->arr[ptr->f];
  }
  else if(ptr->f==ptr->size-1){
    ptr->f=0;
    a=ptr->arr[ptr->f];
  }
  else{
    ptr->f=ptr->f+1;
    a=ptr->arr[ptr->f];
  }
  return a;
}
int deleterear(struct DEque*ptr){
  int a=-1;
  if(isempty(ptr)){
    printf("The queue is empty \n");
  }
  else if(ptr->f==ptr->r){
    a=ptr->arr[ptr->r];
    ptr->f=-1;
    ptr->r=-1;
    
  }
  else if(ptr->r==0){
    a=ptr->arr[ptr->r];
    ptr->r= ptr->size -1;
    
  }
  else{
    a=ptr->arr[ptr->r];
    ptr->r=ptr->r-1;
  }
  return a;
}
void display(struct DEque *ptr){
  int i=ptr->f;
  while(i!=ptr->r)
    {
      printf("%d ",ptr->arr[i]);
      i=(i+1)%ptr->size;
    }
  printf("%d ",ptr->arr[ptr->r]);
}
int main()
{
  struct DEque *dq=(struct DEque*)malloc(sizeof(struct DEque));
  dq->size=5;
  dq->f=-1;
  dq->r=-1;
  dq->arr=(int*)malloc(dq->size* sizeof(int));
  insertfront(dq,5);
  insertback(dq, 10);
  insertfront(dq, 7);
  insertback(dq, 18);
  display(dq);
return 0;
}