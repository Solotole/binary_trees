#include "binary_trees.h"

size_t node_count(const binary_tree_t *root)
{
	size_t left, right, total;

	if (root == NULL)
		return (0);
	if (root->left == NULL && root->right == NULL)
		return (0);
	left = node_count(root->left);
	right = node_count(root->right);
	total = left + right + 1;
	return (total);
}

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = node_count(tree);
	return (count);
}
