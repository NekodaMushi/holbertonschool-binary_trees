

#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that check
 * the lowest common ancestor of two nodes
 *
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: (1) if tree is full , (0) otherwise.
 */

/**Once recursion occurs second will = to back_to_start */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	/**Pointer keeping the initial pos of second, not affected by recursion*/
	const binary_tree_t *back_to_start = second;

	if (first == NULL || second == NULL)
		return (NULL);

	/**Going upstream until first will cross second's path*/
	while (second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		second = second->parent;
	}
	return (binary_trees_ancestor(first->parent, back_to_start));
}
