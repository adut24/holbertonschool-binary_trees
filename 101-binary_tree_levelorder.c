#include "binary_trees.h"
/**
 * binary_tree_height - find the height of the tree
 * @tree: binary tree
 * Return: 0 or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
	return (0);
}

/**
 * print_level - print the current level
 * @tree: binary tree to print
 * @func: function to print
 * @level: current level
 */
void print_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;

	if (level == 0)
		func(tree->n);

	else
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder -Print by level order
 * @tree: tree to print
 * @func: pointer to the function to print
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0;
	int i;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		print_level(tree, func, i);
}
