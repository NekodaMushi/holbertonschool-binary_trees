#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: navigate tree to find height
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

	return (Right_Path > Left_Path ? Right_Path : Left_Path);
}
/**
 * binary_tree_is_leaf - Function that check if the
 * node is a leaf
 * @node: is the pointer to the node to check
 * Return: 1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If the node doesn't exist it ruturn 0 */
	if (!node)
		return (0);

	/* If the node has a child left or right it return 0 */
	if (node->left || node->right)
		return (0);
	/* else it return 1 meaning that it's a leaf */
	return (1);
}

/**
 * binary_tree_is_perfect - Function that check if a
 * binary tree is perfect
 * @tree: is a pointer to the root of a node
 * Return: if the tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	/* Recursive approach and it's stop when tree is NULL */
	if (!tree)
		return (0);

	left = tree->left;
	right = tree->right;
	/* Check if the node is a leaf */
	if (binary_tree_is_leaf(tree))
		return (1);
	/* Height mesures the height of a tree check if the tree is perfect */
	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	/* Returns 0 if the tree is not perfect */
	return (0);
}
