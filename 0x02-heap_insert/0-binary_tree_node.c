#include "binary_trees.h"

/**
 * binary_tree_node - Make a new node
 * @parent: (binary_tree_t *) Parent of the node
 * @value: (int) Value to pass at the node
 *
 * Return: (binary_tree_t *) Address of the new node or NULL if it fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	/* Put the values of the new node */
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
