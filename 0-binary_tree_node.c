#include "binary_trees.h"
/**
 * binary_tree_node - fucntion that creates a binary tree
 * @parent: a pointer to parent node
 * @value: value to set in new
 * Return: a new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	/* new space to create node */
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent; /* parent pointer in new points to parent */
	new->left = NULL; /* NULL since we don't add new nodes to the tree, just the tree is created */
	new->right = NULL;
	new->n = value;
	return (new);
}
