/*
 * singly_linked_list.h
 *
 *  Created on: Sep 23, 2015
 *      Author: alexminnaar
 */

#ifndef LINKED_LIST_SINGLY_LINKED_LIST_H_
#define LINKED_LIST_SINGLY_LINKED_LIST_H_

typedef struct SinglyLinkedListNode {
	double value;
	struct SinglyLinkedListNode * next;
} SinglyLinkedListNode;

typedef struct SinglyLinkedList {

	struct SinglyLinkedListNode * head;

} SinglyLinkedList;


//double get(int index);

//prepend a value to a singly linked list
void preprend(SinglyLinkedList *l, double val);

//print list values from head to tail
void printList(SinglyLinkedList *l);



#endif /* LINKED_LIST_SINGLY_LINKED_LIST_H_ */
