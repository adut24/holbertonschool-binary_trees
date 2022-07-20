#include "binary_trees.h"
#include <stdio.h>

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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: int, a balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;

	return (height_l - height_r);
}

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: the tree
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left || !tree->right) && (tree->left || tree->right))
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (1);
}

/**
 * binary_tree_is_perfect - verify that the height of both sides is the same
 * @tree: the tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full_l, full_r, bal;

	if (!tree)
		return (0);

	if (tree->left)
		full_l = binary_tree_is_full(tree->left);
	if (tree->right)
		full_r = binary_tree_is_full(tree->right);

	if (full_l && full_r)
		bal = binary_tree_balance(tree);

	return (bal == 0);
}
