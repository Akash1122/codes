#include <bits/stdc++.h>
using namespace std;
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
	return newnode;
	}
/*void preorder(struct node *root){
	if(root == NULL){
		return;		
		}
	printf("%d\n",root -> data);
	preorder(root -> left);
	preorder(root -> right);
	}
*/

/*void preorder(struct node *root){
	stack<struct node *>s;
	s.push(root);
	while(! s.empty()){
		root = s.top();		
		printf("%d\n",s.top() -> data);
		s.pop();
		if(root -> right != NULL)
			s.push(root -> right);		
		if(root -> left != NULL)
			s.push(root -> left);
		
			
		}
	
	}*/
/*void levelorder(struct node *root){
	queue<struct node *>q;
	q.push(root);
	while(! q.empty()){
		//printf("size:%d\n",q.size());
		printf("%d\n",q.front() -> data);
		root = q.front();
		q.pop();
		if(root -> left != NULL){
			q.push(root -> left);
			//printf("left : %d",root->data);
		}
		if(root -> right != NULL){
			q.push(root -> right);
			//printf("right : %d",root->data);
		}		
	}	
}*/

void inorder(struct node *root){
	stack<struct node *>s;
	s.push(root);

	while(! s.empty()){
		root = s.top();
		//printf("%d\n",root -> data);
		while(root -> left != NULL){
			root = root -> left;
			s.push(root);
		}
		while(root -> right == NULL){
			printf("%d\n",s.top()->data);
			s.pop();		
			}
				
		if(root -> right != NULL){
			printf("%d\n",s.top() -> data);
			root = root -> right;		
			//s.push(root -> right);
		}

				
	}
}
int main(){
	struct node *root = NULL;
	root = newnode(1);
	root -> left = newnode(2);
	root -> right = newnode(3);
	root -> left -> left = newnode(4);
	root -> left -> right = newnode(5);
	root-> right -> left = newnode(6);
	root -> right -> right = newnode(7);
	inorder(root);
	//levelorder(root);
}
