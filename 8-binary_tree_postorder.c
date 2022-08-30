#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through a binary tree
 * in Post Order.
 * @tree: is a pointer to the root node of the tree to travers
 * @func: is a pinter to a function to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Recursive approche stop if tree or func don't exist anymore */
	if (!tree || !func)
		return;
	/* callback function */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	/* Function that call each node */
	func(tree->n);
}
