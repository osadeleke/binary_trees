#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL, depth of tree otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
