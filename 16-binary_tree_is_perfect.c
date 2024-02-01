#include "binary_trees.h"
/**
 * binary_tree_height - a functo get the height of a Binary tree
 * @tree: pointer to root
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;

	if (l > r)
		return (l);
	else
		return (r);
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
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * sub_tree_perfect - check for subtree perfect
 * @tree: pointer to root
 * Return: 1 if no sub tree, 0 if NULL
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
	if (tree && !tree->right & !tree->left)
		return (1);

	if (tree && tree->right && tree->left)
	{
		return (1 && sub_tree_perfect(tree->left) &&
			sub_tree_perfect(tree->right));
	}
	return (0);
}
/**
 * binary_tree_is_perfect - a func to check if binary tree is perfect
 * @tree: pointer to root to check
 * Return: 1 if its perfect 0 if its not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);

	return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
