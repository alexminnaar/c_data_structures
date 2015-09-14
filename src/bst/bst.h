/*
 * bst.h
 *
 *  Created on: Sep 13, 2015
 *      Author: alexminnaar
 */

#ifndef BST_BST_H_
#define BST_BST_H_

typedef struct{
	double value;

	struct Node *parent;
	struct Node *right_child;
	struct Node *left_child;
} Node;

typedef struct{
	struct Node *root;
} Tree;


//returns pointer to array of node values in order
void InOrderTraversalNode(Node *n);



#endif /* BST_BST_H_ */
