/*
 * bst.c
 *
 *  Created on: Sep 13, 2015
 *      Author: alexminnaar
 */
#include "bst.h"
#include <stdlib.h>

//Print out elements in tree in sorted order.  Complexity O(n) where n is the number of nodes in the tree.
void inOrderTraversalNode(Node *n) {

	if (n != NULL) {

		inOrderTraversalNode(n->left_child);
		printf("%f\n", n->value);
		inOrderTraversalNode(n->right_child);
	}
}

//Insert element into tree.  Complexity O(h) where h is the height of the tree.
void insert(Tree *t, Node n) {

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
	n.parent = y;

	//If n is greater than y then it is its right child and vice-versa.
	if (n.value > y->value) {
		y->right_child = &n;
	} else {
		y->left_child = &n;
	}

}

//Transplant subtree rooted at node u with subtree rooted at node v
void transplant(Tree *t, Node *u, Node *v) {

	Node *p = u->parent;

	//replace u's parent's child pointer to v
	if (p == NULL) {
		t->root = v;
	} else if (u == p->left_child) {
		p->left_child = v;
	} else {
		p->right_child = v;
	}

	//set v's parent pointer to u's parent
	if (v != NULL) {
		v->parent = p;
	}
}

//Find the minimum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * minimum(Node *n) {

	while (n->left_child != NULL) {
		n = n->left_child;
	}

	return n;
}

//Find the maximum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * maximum(Node *n) {

	while (n->right_child != NULL) {
		n = n->right_child;
	}

	return n;
}

//Delete node z from tree t
void delete(Tree *t, Node *z) {

	//if node z has no left subtree, replace z with right subtree and vice-versa.
	if (z->left_child == NULL) {
		transplant(t, z, z->right_child);

	} else if (z->right_child == NULL) {
		transplant(t, z, z->left_child);
	} else {
		Node *y = minimum(z->right_child);

		if (y->parent != z) {
			transplant(t, y, y->right_child);

			y->right_child = z->right_child;
			y->right_child->parent = y;
		}
		transplant(t, z, y);

		y->left_child = z->left_child;
		y->left_child->parent = y;
	}

}

