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

/**
 * add_recursion - checks if a binary tree is complete
 *
 * @tree: Pointer to the binary tree
 * @loc: location of the node
 * @countNode: number of element
 *
 * Return: 1 if complete O otherwise
 */
int add_recursion(const binary_tree_t *tree, int loc,
				  int countNode)
{
	if (!tree)
		return (1);

	if (loc >= countNode)
		return (0);

	return (add_recursion(tree->left, 2 * loc + 1, countNode) * add_recursion(tree->right, 2 * loc + 2, countNode));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if complete 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int countNode = binary_tree_size(tree);

	if (!tree)
		return (0);

	return (add_recursion(tree, 0, countNode));
}
