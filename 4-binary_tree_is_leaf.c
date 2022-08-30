#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that check if the
 * node is a leaf
 * @node: is the pointer to the node to check
 * Return: 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If the node doesn't exist it ruturn 0 */
	if (!node)
		return (0);

	/* If the node has a child left or right it return 0 */
	if (node->left || node->right)
		return (0);
	/* else it return 1 meaning that it's a leaf */
	return (1);
}
