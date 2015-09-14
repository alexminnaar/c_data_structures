/*
 * bst.c
 *
 *  Created on: Sep 13, 2015
 *      Author: alexminnaar
 */
#include "bst.h"
#include <stdlib.h>


void InOrderTraversalNode(struct Node *n) {

	if (n != NULL) {
		InOrderTraversalNode(n->left_child);
		printf("%f",n->value);
		InOrderTraversalNode(n->right_child);
	}
};

