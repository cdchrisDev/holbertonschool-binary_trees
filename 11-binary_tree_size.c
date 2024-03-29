#include "binary_trees.h"
/**
 * binary_tree_size - a func that measures the size of a tree
 * @tree: a pointer to the root
 * Return: the size of the tree, 0 if its NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size + 1);
}
