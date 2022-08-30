#include "binary_trees.h"

/**
 * binary_tree_insert_right - Fct that creates the right child to have
 *
 * @parent: upper node of tree
 * @value: data stored inside node
 *
 * Return: New node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node();

	if (!parent)
		return (NULL);

	parent->right = new_node;

	return (new_node);
}
