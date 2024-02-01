#include "binary_trees.h"
/**
 * binary_tree_is_full - a func that checks if a tree is full
 * @tree: pointer to root
 * Return: (int) counter or 0 if its NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
