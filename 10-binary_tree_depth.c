#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: return 0 if tree is NULL or depth otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *node = tree;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		depth += 1;
		node = node->parent;
	}
	return (depth);
}
