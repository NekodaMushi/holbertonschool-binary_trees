#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: navigate tree to find height
 *
 * Return: Height of tree, otherwise (0) if no tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Left_Path = 0;
	int Right_Path = 0;

	if (!tree)
		return (0);

	if (tree->left)
		Left_Path = binary_tree_height(tree->left) + 1;
	if (tree->right)
		Right_Path = binary_tree_height(tree->right) + 1;

	if (Right_Path > Left_Path)
		return (Right_Path);
	else
		return (Left_Path);
}


/**
 * binary_tree_balance - Function that mesure balance of factor
 * @tree: is the pointer that point to the root of the tree
 * Return: the balance of factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (height_l - height_r);
}
