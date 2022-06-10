#include <iostream>
#include <stdlib.h>

int main(){
	struct node{
		int data;
		struct node *next;
		struct node *prev;
	};
	
	struct node *head, *middle, *last;
	
	head=(struct node *) malloc(sizeof(struct node));
	middle=(struct node *) malloc(sizeof(struct node));
	last=(struct node *) malloc(sizeof(struct node));
	
	head->data = 10;
	middle->data = 20;
	last->data = 30;
	
	head->next = middle;
	middle->next = last;
	last->next = NULL;
	
	head->prev = NULL;
	middle->prev = head;
	last->prev = middle;
	
	struct node *temp = last;
	
	while(temp != NULL){
		std::cout<<temp->data<<" ";
		temp = temp->prev;
	}
}
