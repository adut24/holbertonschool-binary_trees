#include "binary_trees.h"

/**
 * binary_tree_postorder - function that print the values in post order
 * @tree: the binary tree
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
