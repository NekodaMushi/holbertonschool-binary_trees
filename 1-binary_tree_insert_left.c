#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: is the pointer to the node to insert
 * @value: is the value to store in the new node
 * Return: the new child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = NULL;

	newLeft = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if ((parent->left) == NULL)
		parent->left = newLeft;
	else
	{
		newLeft->left = parent->left;
		parent->left->parent = newLeft;
		parent->left = newLeft;
	}
	return (newLeft);
}
