#include "binary_trees.h"
/**
 * binary_tree_nodes - a func that counts nodes with at least 1 child
 * @tree: root node
 * Return: count or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
