#include "binary_trees.h"

/**
 * binary_tree_node - add a node to the binary tree
 * @parent: pointer to the parent node
 * @value: value to add to the node
 * Return: pointer to the node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
