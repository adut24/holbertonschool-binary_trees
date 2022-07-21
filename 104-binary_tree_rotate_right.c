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

	if (root->right)
	{
		tree->left = root->right;
		root->right->parent = tree;
	}
	else
		tree->left = NULL;

	root->right = tree;
	root->parent = NULL;

	return (root);
}
