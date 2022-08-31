#include "binary_trees.h"

/**
 * binary_tree_balance - Function that mesure balance of factor
 * @tree: is the pointer that point to the root of the tree
 * Return: the balance of factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/* Recursive approach, stops if trees don't exist anymore */
	if (!tree)
		return (0);

	/* Returns + 2 if the tree is balance */
	if (binary_tree_balance(tree->left) && binary_tree_balance(tree->right))
		return (+2);
	/* Return -1 if the tree is imbalance */
	return (-1);
}
