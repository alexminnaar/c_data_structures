/*
 * bst.h
 *
 *  Created on: Sep 13, 2015
 *      Author: alexminnaar
 */

#ifndef BST_BST_H_
#define BST_BST_H_

typedef struct Node {
	double value;

	struct Node *parent;
	struct Node *right_child;
	struct Node *left_child;
} Node;

typedef struct Tree {
	struct Node *root;
} Tree;

//Print out elements in tree in sorted order.  Complexity O(n) where n is the number of nodes in the tree.
void inOrderTraversalNode(Node *n);

//Insert node n into tree t.  Complexity O(h) where h is the height of the tree.
void insert(Tree *t, Node *n);

//Transplant subtree rooted at node u with subtree rooted at node v in tree t.
void transplant(Tree *t, Node *u, Node *v);

//Find the minimum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * minimum(Node *n);

//Find the maximum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * maximum(Node *n);

Node * successor(Node *n);

Node * predecessor(Node *n);

//Delete node z from tree t
void delete(Tree *t, Node *z);

#endif /* BST_BST_H_ */
