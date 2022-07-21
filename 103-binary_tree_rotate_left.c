#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_left - rotate the tree to the left
 * @tree: binary tree
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;

	if (!tree || !tree->right)
		return (NULL);

	root = tree->right;
	tree->parent = root;

	if (root->left)
		tree->right = root->left;
	else
		tree->right = NULL;

	root->left = tree;
	root->parent = NULL;

	return (root);
}
