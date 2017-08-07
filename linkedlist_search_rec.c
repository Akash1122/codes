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
/*
void search(struct node *head ,int v){
	struct node *temp = head;
	if(temp == NULL){
		printf("empty list\n");
		return;		
		}
	int f = 0;
	while(temp -> next != NULL){
		if(temp -> data == v){
			f = 1;
			printf("yes\n");
			break;		
			}
		temp = temp -> next;		
		}
	if(f == 0){
		printf("NO\n");		
		}
	}
*/

void search_rec(struct node *head , int v){
	struct node *temp = head;	
	if(temp -> data == v){
		printf("yes\n");
		return;		
		}
	if(temp -> next == NULL){
		printf("NO\n");
		return;		
		}
	else
		search_rec(temp -> next ,v);		
	}

int main(){
	struct node *head = NULL;
	insert(&head , 12);
	insert(&head , 25);
	insert(&head , 50);
	insert(&head , 5);
	insert(&head , 500);
	traversal(head);
	search_rec(head , 0);
	}
