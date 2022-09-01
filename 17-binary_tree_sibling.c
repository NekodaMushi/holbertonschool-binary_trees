#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that count nodes
 * with at least 1 child
 *
 * @tree: is the pointer that point to the root of the binary tree
 *
 * Return: (1) if tree is full , (0) otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node && !node->parent)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	return (NULL);
