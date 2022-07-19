#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes with at least one child
 * @tree: binary tree
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count += binary_tree_nodes(tree->left);

	if (tree->right)
		count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (count + 1);

	return (count);
}
