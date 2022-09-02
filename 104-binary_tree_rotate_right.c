#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that performs a left rotaion of
 * a binary tree
 * @tree: is a pointer that points to the root of the tree
 * Return: the rotation of the tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
		/* If tree doesnt exist it returns NULL */
	if (!tree)
		return (NULL);
	/* tree.right is the parent */
	tree->parent = tree->left;
	/* If tree right exist */
	/* Performs the left rotation */
	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;

		if (tree->left)
			tree->left->parent = tree;

		return (tree->parent);
	}

	return (tree);
}
