#include "binary_trees.h"
/**
 * binary_tree_is_root - a function to check if its root
 * @node: node to check
 * Return: 1 if its root, 0 it it's not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
