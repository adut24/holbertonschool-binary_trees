#include "binary_trees.h"
#include <limits.h>

int check_tree(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (check_tree(tree->left, min, tree->n - 1) &&
		check_tree(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - check if the binary tree is a BST
 * @tree: binary tree
 * Return: 0 or 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_tree(tree, INT_MIN, INT_MAX));
}
