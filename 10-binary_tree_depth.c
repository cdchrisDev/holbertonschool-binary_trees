#include "binary_tree.h"
/**
 * binary_tree_depth - a func that goes the depth of a binary tree
 * @tree: pointer to measure
 * Return: the size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}
