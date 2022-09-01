#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that check if node
 * has a sibling
 *
 * @node: is the pointer of node of the binary tree
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
}
