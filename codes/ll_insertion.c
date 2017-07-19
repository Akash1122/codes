#include<stdio.h>

struct node{
	int data;
	struct node *next;	
	};

void insert(struct node **h , int value){
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> next = NULL;	
	if( (*h) == NULL){
		(*h) = newnode;
		return;
		}
	struct node *temp = (*h);
	while(temp -> next != NULL)
		temp = temp -> next;
	temp -> next = newnode;	
	}
void traversal(struct node *h){
	struct node *temp = h;
	if(temp == NULL){
		printf("empty list");
		return;		
		}
	while(temp != NULL){
		printf("%d\n",temp -> data);
		temp = temp -> next;		
		}
	}

int main(){
	struct node *head = NULL;
	insert(&head , 25);
	//insert(&head , 12);
	//insert(&head , 63);
	//insert(&head , 41);
	traversal(head);	
	}


