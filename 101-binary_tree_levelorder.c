#include "binary_trees.h"

#include "binary_trees.h"

/**
 * printLevel - function that prints in the level
 * @tree: is a pointer that point to the root fo the tree
 * @level: level of BiTr
 * @func: function that prints the traverse
 */

void printLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		printLevel(tree->left, func, level - 1);
		printLevel(tree->right, func, level - 1);
	}
}

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

	Left_Path = binary_tree_height(tree->left) + 1;
	Right_Path = binary_tree_height(tree->right) + 1;

	return (Right_Path > Left_Path ? Right_Path : Left_Path);
}

/**
 * binary_tree_levelorder - function that goes through a
 * binary tree using level-order traversal
 * @tree: pointer that point to the root of the tree
 * @func: Function that prints the data of the leaf
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = 0;
	int i = 0;

	if (!tree || !func)
		return;

	h = binary_tree_height(tree);

	for (i = 1; i <= h; i++)
		printLevel(tree, func, i);

}
