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
void insert(Tree *t, double v);

//Transplant subtree rooted at node u with subtree rooted at node v in tree t.
void transplant(Tree *t, Node *u, Node *v);

//Find the minimum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * minimum(Node *n);

//Find the maximum node in subtree of node n.  Complexity O(h) where h is the height of the subtree.
Node * maximum(Node *n);

//Find the in-order successor of a given node.
Node * successor(Node *n);

//Find the in-order predecessor of a given node.
Node * predecessor(Node *n);

//Delete node z from tree t
void delete(Tree *t, Node *z);

/*
 Determine if a node with a given value exists in a tree.  Returns the node or NULL if it doesn't exit.
 O(logn) average, O(h) worst case.
 */
Node * search(Tree *t, double v);

#endif /* BST_BST_H_ */
