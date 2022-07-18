#include "binary_trees.h"

/**
 * binary_tree_height - find the height of the tree
 * @tree: binary tree
 * Return: 0 or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left)
		return(binary_tree_height(tree->left) + 1);
	if (tree->right)
		return(binary_tree_height(tree->right) + 1);

	return (0);
}
