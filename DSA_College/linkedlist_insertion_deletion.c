#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}; struct Node*head;
 void display(struct Node*ptr)
 {
    ptr=head;
    if(ptr==NULL){
        printf("Nothing to print \n");
    }
    else{
        while (ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
 }
 struct Node*insertafter(struct Node* head,struct Node*prevnode,int val)
 {
    struct Node*ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data= val;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
 }
 struct Node* insertbegin(struct Node*head,int val)
{
    struct Node*ptr= (struct Node*)malloc(sizeof(struct Node));

    ptr->data=val;
    ptr->next=head;
    head=ptr;
    return head;
}
struct Node* insertlast(struct Node*head,int val)
{
 struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
 struct Node*p=head;
 while(p->next!=NULL)
 {
    p=p->next;
 }
p->next=ptr;
ptr->next = NULL;
ptr->data=val;
return head;
}
struct Node*insertatindex(struct Node*head, int val, int index)
{
    struct Node*ptr= (struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->data=val;
    p->next=ptr;
    return head; 
}
struct Node* deletefirst(struct Node*head)
{
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node* deleteatindex(struct Node*head,int index)
{
    struct Node *p=head;
     struct Node* q=head->next;
    
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
       q= q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node* deleteratLast(struct Node*head)
{
    struct Node*p=head;
    struct Node *q= head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next= NULL;
    free(q);
    return head;
}
int main()
{
    head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second;
    struct Node* third; 
    second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  head->data=9;
  head->next=second;
  second->data=8;
  second->next=third;
  third->data=69;
  third->next = NULL;
 head= insertbegin(head,26);
 head= insertatindex(head,18,3);
 head= insertlast(head,35);
 head= insertafter(head,second,53);
  display(head);
  head= deletefirst(head);
  printf("\n");
  display(head);
 head=deleteatindex(head,3);
   printf("\n");
  display(head);
  head= deleteratLast(head);
    printf("\n");
  display(head);
  return 0;
}