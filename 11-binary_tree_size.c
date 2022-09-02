#include "binary_trees.h"

/**
 * binary_tree_size - Function that mesure
 * the number of element of a tree
 *
 * @tree: is a pinter that piont to the root of a binary tree
 *
 * Return: the depth of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/** this step isn't useful as we already get it in the return
	 *
	 * binary_tree_size(tree->left);
	 * binary_tree_size(tree->right);
	 *
	 */

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
