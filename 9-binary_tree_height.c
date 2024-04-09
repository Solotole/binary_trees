#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL returns 0 or the height otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	const binary_tree_t *node;

	while (tree->left != NULL || tree->right != NULL)
	{
		node = tree;
		if (node->left != NULL)
		{
			height += 1;
			node = node->left;
		}
		else if (node->right != NULL)
		{
			height += 1;
			node = node->right;
		}
		tree = node;
	}
	return (height);
}
