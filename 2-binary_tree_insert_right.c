#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node to the right
 * @parent: pointer to the parent
 * @value: value to add
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->right)
	{
		tmp = parent->right;
		node->right = tmp;
		tmp->parent = node;
	}
	parent->right = node;
	node->parent = parent;

	return (node);
}
