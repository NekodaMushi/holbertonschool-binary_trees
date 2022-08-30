#include "binary_trees.h"

/**
 * binary_tree_depth - Function that mesure
 * the depth of a node in a binary tree
 * @tree: is a pinter that piont to the root of a binary tree
 * Return: the depth of nodes
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Recursive approcah! Stop when tree is null */
	if (tree == NULL)
		return (-1);
	/* If not the depth will be calulated */
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}

