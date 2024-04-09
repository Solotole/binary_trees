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
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1
			 + binary_tree_size(tree->right));
}
