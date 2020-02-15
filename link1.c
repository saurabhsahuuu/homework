#include<stdlib.h>
#include<stdio.h>
struct node{
     int data;
     struct node* next;
};
 struct node*head;
 void insert(int x);
{
  node* temp = (node*)malloc(sizeof(struct node));
  temp->next =x;
  temp->next = head;
  head = temp;
}
 void print();
{
   struct node* temp = head;
   printf("list is:");
   while(temp != NULL)
{
    printf("%d",temp->data);
    temp= temp->next;
}
 printf("\n");
}
int main(){
    head = NULL;
    printf("how many numbers\n");
    scanf("%d",&n);
    for(i = 0;i<n;i++){
     printf("enter the number \n");
     scanf("%d",&x);
     insert(x);
     print();
   }
}