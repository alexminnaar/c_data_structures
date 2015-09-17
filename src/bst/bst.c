/*
 * bst.c
 *
 *  Created on: Sep 13, 2015
 *      Author: alexminnaar
 */
#include "bst.h"
#include <stdlib.h>


//Print out elements in tree in sorted order.  Complexity O(n) where n is the number of nodes in the tree.
void InOrderTraversalNode(Node *n) {

	if (n != NULL) {
		InOrderTraversalNode(n->left_child);
		printf("%f", n->value);
		InOrderTraversalNode(n->right_child);
	}
};

void Insert(Tree *t, Node n) {

	Node *x = t->root, *y = NULL;

	//follow tree down until we reach a leaf of the tree
	while (x != NULL) {

		//save last non-NULL value. We will insert node n as a child to this leaf.
		y = x;

		if (n.value < x->value) {
			x = x->left_child;
		} else {
			x = x->right_child;
		}

	}

	//The parent of the node to insert is the leaf we reached
	n.parent=y;

	//If n is greater than y then it is its right child and vice-versa.
	if(n.value > y->value){
		y->right_child= &n;
	}else{
		y->left_child= &n;
	}

};

