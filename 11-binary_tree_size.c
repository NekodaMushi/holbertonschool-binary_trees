#include "binary_trees.h"

/**
 * binary_tree_depth - Function that mesure
 * the depth of a node in a binary tree
 * @tree: is a pinter that piont to the root of a binary tree
 * Return: the depth of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
