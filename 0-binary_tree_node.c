#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: a value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	i = malloc(sizeof(binary_tree_t));
	if (i == NULL)
		return (NULL);

	i->n = value;
	i->parent = parent;
	i->left = NULL;
	i->right = NULL;

	return (i);
}
