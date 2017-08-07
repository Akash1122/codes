
#include <bits/stdc++.h>
using namespace std;


struct node {
  int data;
  struct node * right, * left, *parent;
}; 

struct node* insert(struct node* node, int data)
{
    if(node == NULL){
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> data = data;
        newnode -> left = NULL;
        newnode -> right = NULL;
	newnode -> parent = NULL;
	
        node = newnode;
        return node;
    }
    if(node -> data < data){
	struct node *temp = insert(node -> right ,data);         
	node -> right = temp;
	temp -> parent = node;
	
    }
    else if(node -> data > data){
        struct node *temp = insert(node -> left ,data);         
	node -> left = temp;
	temp -> parent = node;
    }
    else{
        return node;
    }
    return node;

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
struct node *inorder_succ(struct node *root,struct node *temp){
	if(temp -> right != NULL){
		struct node *result = minvalue(temp -> right);
		return result;
	}
	struct node *ans = temp -> parent;
	while(ans != NULL && ans -> right == temp ){
		temp = ans;
		ans = temp -> parent;
	}
	return ans;

}
struct node *findmax(struct node *root){
	while(root -> right != NULL){
		root = root -> right;	
		}
	return root;
}

struct node *predecessor(struct node *root ,struct node *temp){
	if(temp -> left != NULL){
		struct node *ans = findmax(temp -> left);
		return ans;	
		}
	struct node *p = temp -> parent;
	while(p != NULL && p -> left == temp){
		temp = p;
		p = temp -> parent;	
	}	
	return p;
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
	//struct node *temp = root -> left -> right; 
	//printf("%d ",temp -> parent -> data);
	//deletes(root ,50);
	//preorder(root);
	//struct node *temp = root->left;
	/*struct node *temp = search(root ,25);
	if(temp -> data == 25){
		printf("YES\n");	
		}	
	else{
		printf("NO\n");
	}*/
	struct node *temp = root -> left -> left;
	//printf("%d ",temp -> data);
	struct node *ans = predecessor(root,temp);
	if(ans == NULL){
		printf("NO\n");		
		}	
	else
		printf("%d ",ans -> data);   
}




