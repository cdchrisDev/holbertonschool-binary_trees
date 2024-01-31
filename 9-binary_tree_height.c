#include "binary_trees.h"
/**
 * binary_tree_height - a functo get the height of a Binary tree
 * @tree: pointer to root
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			i++;
			binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			i++;
			binary_tree_height(tree->right);
		}
		else
			return (0);
	}
	return (i);
}
