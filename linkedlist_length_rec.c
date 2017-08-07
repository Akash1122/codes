#include<stdio.h>

struct node{
	int data;
	struct node *next;
	};

void insert(struct node **h , int v){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = v;
	newnode -> next = NULL;
	if( (*h) == NULL){
		(*h) = newnode;
		return;		
		}
	newnode -> next = (*h);
	(*h) = newnode;
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

int rec_length(struct node *head){
	struct node *temp = head;
	if(temp == NULL)
		return 0;
	else
		return (1 + rec_length(temp -> next));	
	
	}

int main(){
	struct node *head = NULL;
	insert(&head , 12);
	insert(&head , 25);
	insert(&head , 50);
	insert(&head , 5);
	insert(&head , 500);
	traversal(head);
	int k = rec_length(head);
	printf("%d\n",k);
	}
