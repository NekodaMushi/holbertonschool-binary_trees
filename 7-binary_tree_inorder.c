#include "binary_trees.h"

/**
 * binary_tree_inorder - Fct that that goes through
 * a binary tree using in-order traversal
 *
 * @tree: tree checked to navigate
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left);
	func(tree->n);
	binary_tree_inorder(tree->right);
}
