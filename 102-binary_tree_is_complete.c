#include "binary_trees.h"

/**
* binary_tree_size - find the size of the tree
* @tree: the tree
* Return: size of the tree
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * is_complete - check if the tree is complete
 * @tree: tree to check
 * @index: index of the node
 * @size: size of the tree
 * Return: 0 or 1
 */
int is_complete(const binary_tree_t *tree, int index, int size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - check if a tree is complete
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);

	return (is_complete(tree, 0, size));
}
