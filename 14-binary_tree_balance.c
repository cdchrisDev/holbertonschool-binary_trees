#include "binary_trees.h"
/**
 * binary_tree_balance - a func that measure balance factor
 * @tree: root node to measure
 * Return: the count or 0 if its NULL
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	r = _binary_tree_height(tree->right);
	l = _binary_tree_height(tree->left);

	return (1 + ((r >= l) ? r : l));
}
/**
 * binary_tree_balance - a func that measures the balance
 * @tree: a pointer to root node to measure the balance
 * Return: the measurement or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
