#include "binary_trees.h"
/**
 * binary_tree_size - function to return size of
 * a tree
 * @tree: tree to calculate size
 * Return: return 0 if the node tree is NULL
 * or size otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, total;
	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	total = left + 1 + right;
	return (total);
}
