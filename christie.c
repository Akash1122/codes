#include<stdio.h>

struct node{
int data;
strudt node *next;
};

int main(){
int t;
scanf("%d",&t);
while(t--){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	struct node *head = NULL;
	struct node *newnode,*temp;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = a[0];
	newnode -> next = NULL;
	head = newnode;
	temp = head;
	for(i=1;i<n;i++){
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode -> data = a[i];
		newnode -> next = NULL;
		if(temp -> data == newnode -> data){
			delete(&head,temp);
			temp = newnode;		
			}		
		
		}	

	}	
}
