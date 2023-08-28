#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void TraverseLinkedlist(struct Node*ptr)
{
  if(ptr==NULL){
    printf("Nothing to print \n");
  }
  else{
  while( ptr!= NULL){
    printf("%d ",ptr->data);
    ptr = ptr->next;
  }
  }
}
int main()
{
  struct Node* head;
  struct Node* second;
  struct Node* third;  
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  head->data=9;
  head->next=second;
  second->data=8;
  second->next=third;
  third->data=69;
  third->next = NULL;
  TraverseLinkedlist(head);
return 0;
}