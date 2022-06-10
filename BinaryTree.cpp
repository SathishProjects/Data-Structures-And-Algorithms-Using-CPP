#include <iostream>
#include <stdlib.h>

int main(){
	
	struct node {
		int data;
		struct node *left;
		struct node *right;
		
		node(int val){
			data=val;
			left=NULL;
			right=NULL;
		}
	};
	
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	
	root->left->left = new node(4);
	
	std::cout<<"Hi";
}
