#include<stdio.h>

struct node{
	int data;
	struct node *left;
	struct node *right;	
	};
struct node *newnode(int value){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> left = NULL;
	newnode -> right = NULL;
	return (newnode);	
	}
void preorder(struct node *node){
	if(node == NULL)
		return;
	printf("%d\n",node -> data);
	preorder(node -> left);
	preorder(node -> right);	
	}

void postorder(struct node *node){
	if(node == NULL)
		return;
	postorder(node -> left);
	postorder(node -> right);
	printf("%d\n",node -> data);	
	}
void inorder(struct node *node){
	if(node == NULL)
		return;
	inorder(node -> left);
	printf("%d\n",node -> data);
	inorder(node -> right);	
	}

int main(){
	struct node *root = newnode(1);
	root -> left = newnode(2);
	root -> right = newnode(3);
	root -> left -> left = newnode(4);
	root -> left -> right = newnode(5);
	root -> right -> right = newnode(15);
	root -> right -> left = newnode(18);
	//preorder(root);
	//inorder(root);
	postorder(root);
	}

