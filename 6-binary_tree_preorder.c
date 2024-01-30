#include "binary_trees.h"
/**
 * binary_tree_preorder - func that goes the tree in preorder
 * @tree: pointerosokododkfoodofkfdfsdfsd
 * @func: a func to call for each node
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(void)(tree);

	if (tree == NULL || *func == NULL)
		return;

	func(tree->n); /* present the int value */

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

	return;
}
