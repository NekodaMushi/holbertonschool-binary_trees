#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that check if node
 * has a uncle
 *
 * @node: is the pointer of node of the binary tree
 *
 * Return: (1) if tree is full , (0) otherwise.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left) /**Check if we need to switch*/
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
