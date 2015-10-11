/*
 * singly_linked_list.c
 *
 *  Created on: Oct 11, 2015
 *      Author: alexminnaar
 */

#include "singly_linked_list.h"
#include <stdlib.h>

//prepend a value to a singly linked list
void prepend(SinglyLinkedList *l, double val){

	SinglyLinkedListNode *n = malloc(sizeof(SinglyLinkedListNode));
	n->value=val;

	//new node's next should be current head
	n->next=l->head;

	//change head to new node
	l->head = n;
}

//print list values from head to tail
void printList(SinglyLinkedList *l){

	SinglyLinkedListNode *n = l->head;

	while(n){
		printf("%f \n", n->value);
		n = n->next;
	}

}
