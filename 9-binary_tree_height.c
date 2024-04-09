#include "binary_trees.h"

/**
 * tree_height - function that conducts
 * the function of finding tree height
 * @root: tree root to be traversed
 *
 * Return: tree height or 0 otherwise
 */
size_t tree_height(const binary_tree_t *root)
{
	size_t left, right;
	
	if (root == NULL)
		return (0);
	left = tree_height(root->left);
	right = tree_height(root->right);
	if (left >= right)
		return (left + 1);
	if (left < right)
		return (right + 1);
	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL returns 0 or the height otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = tree_height(tree);
	return (height - 1);
}
