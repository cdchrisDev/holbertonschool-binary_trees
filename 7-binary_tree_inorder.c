#include "binary_trees.h"
/**
 * binary_tree_inorder - a func that goes the tree using in order technique
 * @tree: pointer to root
 * @func: func to call each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	(void)(tree);

	if (tree == NULL || *func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n); /* present int value after left is visited*/

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
