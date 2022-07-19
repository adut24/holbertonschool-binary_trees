#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of the tree
 * @tree: binary tree
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
