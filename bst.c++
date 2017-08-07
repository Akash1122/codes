/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
#include <bits/stdc++.h>
using namespace std;

//The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; 
/* This function should insert a new node with given data and
   return root of the modified tree  */
struct node* insert(struct node* node, int data)
{
    if(node == NULL){
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> data = data;
        newnode -> left = NULL;
        newnode -> right = NULL;
        node = newnode;
        return node;
    }
    if(node -> data < data){
        node -> right = insert(node -> right ,data);
    }
    else if(node -> data > data){
        node -> left = insert(node -> left ,data);
    }
    else{
        return node;
    }
    return node;
    // Your code here
}

struct node *search(struct node *root ,int v){
	if(root == NULL || root -> data == v){
		return root;		
		}
	else if(root -> data < v){
		return search(root -> right,v);
		}
	else {
		return search(root -> left,v);		
		}
	
	}

void preorder(struct node *root){
	if(root == NULL	){
		return ;
		}
	printf("%d ",root -> data);
	preorder(root -> left);
	preorder(root -> right);
	}

struct node *minvalue(struct node *root){
	struct node *current = root;
	while(current -> left != NULL){
		current = current -> left ;	
	}	
	return current ;
}
struct node *deletes(struct node *root ,int value){
	if(root == NULL){
		return root;	
	}	
	if(root -> data > value){
		root -> left =  deletes(root -> left , value);
	}
	else if(root -> data < value){
		root -> right = deletes(root -> right , value);
	}
	else{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		//temp -> left = NULL;
		//temp -> right = NULL;
		if(root -> left == NULL){
			temp = root -> right;
			free(root);
			return temp;
		}	
		else if(root -> right == NULL){
			temp = root -> left;
			free(root);
			return temp;
		}	
		temp = minvalue(root -> right);
		root -> data = temp -> data;
		root -> right = deletes(root -> right, temp -> data);
		
	}
	return root;
	

} 

int main(){
	struct node *root = NULL;
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		root = insert(root,a[i]);
	}
	deletes(root ,50);
	preorder(root);
	/*struct node *temp = search(root ,25);
	if(temp -> data == 25){
		printf("YES\n");	
		}	
	else{
		printf("NO\n");
	}*/
	//printf("%d ",temp -> data);
   
}




