#include "binary_trees.h"
/**
 * bst_search - function to serach for a key in tree
 * @tree: root node pf the tree
 * @value: value key to be search
 *
 * Return: return the node having the value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *node = tree;

	if (!node)
		return (NULL);
	if (value < node->n && node->left)
	{
		node = node->left;
		if (node->n == value)
			return ((bst_t *)node);
		else
			return (bst_search(node, value));
	}
	else if (value > node->n && node->right)
	{
		node = node->right;
		if (node->n == value)
			return ((bst_t *)node);
		else
			return (bst_search(node, value));
	}
	return (NULL);
}
