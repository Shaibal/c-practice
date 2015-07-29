/*
This linkedlist implementation shows the power of recursion in printing the list
items in forward and reverse order
However recursive call requires the head node of the linked list to be a local
variable instead of global variable.
Consequently other functions, for example insert is rewritten in this example.

Version 2.0
Added reversing a linkedlist using recursion function.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* insert(struct Node* temp_head,int data) {
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if (temp_head == NULL) {
		temp_head = temp;
	} else {
		struct Node* temp2 = temp_head;
		while(temp2->next != NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return temp_head;
}
void print(struct Node* temp_head) {
	if(temp_head == NULL) {
		printf("\n");
		return;
	}
	printf("%d ", temp_head->data);
	print(temp_head->next);
}
/*
struct Node* reverseList(struct Node* temp_head){
	struct Node* head;
	if(temp_head->next == NULL) {
	 	head = temp_head;
		return;
	}
	reverseList(temp_head->next);
	struct Node* temp2 = temp_head->next;
	temp2->next = temp_head;
	temp_head->next = NULL;
	return head;	
}
*/
void printReverse(struct Node* temp_head) {
	if(temp_head == NULL) {
		return;
	}
	printReverse(temp_head->next);
	printf("%d ", temp_head->data);
}

int main() {
	struct Node* head = NULL;
	head = insert(head, 15);
	head = insert(head, 24);
	head = insert(head, 44);
	head = insert(head, 5);
	head = insert(head, 4);
	head = insert(head, 9);
	print(head);
	printReverse(head);
	printf("\n");
//	printf("\n After reversing the list");
//	head = reverseList(head);
//	print(head);
	return 0;
}

