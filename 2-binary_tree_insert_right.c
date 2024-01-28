#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function to insert right node
 * @parent: points to the parent
 * @value: value to insert
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new->left = NULL;
	new->right = parent->right; /* new as rigght as parent right */
	parent->right = new; /* parent right as new node */

	return (new);
}
