#include "binary_trees.h"
/**
 * binary_tree_postorder - a func that goes the list in postorder
 * @tree: pointer to root
 * @func: function to call each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		(void)(tree);

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);

		func(tree->n);
	}
}
