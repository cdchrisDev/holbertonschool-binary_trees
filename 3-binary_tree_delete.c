#include "binary_trees.h"
/**
 * binary_tree_delete - a function to delete a binary tree
 * @tree: pointer to root
 * Return: 0
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}