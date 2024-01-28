#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function to check if a node is leaf
 * @node: node to check
 * Return: 1 if it is, 0 if its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);

	return (0);
}
