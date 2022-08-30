#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes a binary tree
 * @tree: is the pointer to the root of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
