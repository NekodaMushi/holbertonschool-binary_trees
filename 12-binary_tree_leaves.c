#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that count leaves
 * in a binary tree.
 * @tree: is the pointer that point to the root of the binary tree
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Recursive approach stop when tree doesn't exist anymore */
	if (!tree)
		return (0);
	/* If tree.left and tree.right don't exist it returns 1 */
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
