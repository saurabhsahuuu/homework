#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int data);
{
node* temp = (node*) = head;
temp->next = data;
temp-> = head;
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
void delete(int n);
{
	struct node* temp1 = head;
	if(n ==1){
		head = temp1->next;
		free(temp1);
		return;
	}
	int i;
	for(i = 0;i<n-2;i++)
		temp1 = temp1->next;
	struct node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}
int main()
{
	head = NULL;
	insert(2);
	insert(4);
	insert(8);
	insert(9);
	print();
	int n;
	printf("enter a positiion\n");
	scanf("%d",&n);
	delete(n);
	print();
}