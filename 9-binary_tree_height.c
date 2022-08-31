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
		return Right_Path;
	else
		return Left_Path;
}
