/*
A linked list that comes with 3 functionalities
1. Inserting at the end of linked list
2. Deleting a node at specific position
3. Print the linked list
*/
#include <stdio.h>
#include <stdlib.h>
// structure of Linkedlist node 
struct Node {
    int data;
    struct Node* next;
};
// insert at the end of linkedlist function 
void insert(int data);

// delete at specific position function
void delete(int pos);

// function for reversing the linked list
void reverse();

// function for printing the linked list
void print();

//Set Global head node
struct Node* head;

int main()
{
    head = NULL;
    insert(15);
    insert(10);
    insert(110);
    insert(6);
    insert(190);
    insert(15);
    insert(10);
    print();
    printf("After deleting node at position 4->\n");
    delete(4);
    print();
    printf("After deleting node at position 1->\n");
    delete(1);
    print();   
    printf("After reverse of list\n");
	reverse();
	print();
    return 0;
}

void insert(int data) {
    // creating new node at heap memory through malloc
    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    // Checking if linkedlist is empty
    if(head == NULL) {
        head = temp1;
    } else {
        struct Node* temp2 = head;
        while (temp2->next != NULL) {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
    }
}

void delete(int pos) {
    struct Node* temp1 = head;
    if (pos == 1) {
        head = head->next;
        free(temp1);
    } else {
        int i;
        for(i=1; i < pos-1; i++) {
            temp1 = temp1->next;
        }
        struct Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

void print() {
    struct Node* temp1 = head;
    while (temp1 != NULL) {
        printf("%d ",temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}

void reverse() {
	struct Node *current, *prev, *next;
	current = head;
	prev = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;	
	}
 	head = prev;
}

