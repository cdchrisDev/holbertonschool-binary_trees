#include "binary_trees.h"
/**
 * binary_tree_insert - a func that inserts a left binary node
 * @parent: points to parent
 * @value: the value to set to the node
 * Return: 0
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = parent->left; /* the new left, is th same as the left of the first node */
	parent->left = new; /* the same as the left of first node is the new node */

	if (new->left)
		new->left->parent = new; /* the same as the parent of the left new node is in fact, the new node */

	return (new);
}
