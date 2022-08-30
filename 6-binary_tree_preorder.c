#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: is a pointer to the root node
 * @func: is a pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Pointer to a function to call each node */
	func(tree->n);
	/* If the tree doesn't exist nothing happen */
	if (!tree)
		return;
	/* Recursive approach */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
