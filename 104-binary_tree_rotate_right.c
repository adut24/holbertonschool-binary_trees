#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate the tree to the right
 * @tree: binary tree
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;

	if (!tree || !tree->left)
		return (NULL);

	root = tree->left;
	tree->parent = root;

	if (root->left)
		tree->left = root->left;
	else
		tree->left = NULL;

	root->left = tree;
	root->parent = NULL;

	return (root);
}
