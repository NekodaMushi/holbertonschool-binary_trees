#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that count nodes
 * with at least 1 child
 *
 * @tree: is the pointer that point to the root of the binary tree
 *
 * Return: the number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
