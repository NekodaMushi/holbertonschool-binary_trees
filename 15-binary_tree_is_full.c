#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that count nodes
 * with at least 1 child
 *
 * @tree: is the pointer that point to the root of the binary tree
 *
 * Return: (1) if tree is full , (0) otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right && tree->left)
		return (1);

	if (!tree->right && !tree->left)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	else
		return (0);
}
