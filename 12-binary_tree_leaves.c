#include "binary_trees.h"
/**
 * binary_tree_leaves - a func that counts leaves
 * @tree: pointer to the root to count
 * Return: count of leaves or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	i = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (i);
}
