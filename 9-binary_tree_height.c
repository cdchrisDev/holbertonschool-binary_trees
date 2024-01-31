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
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		
		l = binary_tree_height(tree->left) + 1;
		r = binary_tree_height(tree->right) + 1;

		if (l > r)
			return (l);
		else
			return (r);
	}
}
