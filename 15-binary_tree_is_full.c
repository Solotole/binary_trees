#include "binary_trees.h"

/**
 * full_tree - function to confirm for full tree
 * characteristics
 * @node: root node of the tree
 * Return: return 0 if not full tree or 1 otherwise
 */
int full_tree(const binary_tree_t *node)
{
	int left, right;

	if (!node)
		return (1);
	if ((node->left == NULL && node->right != NULL) ||
			 (node->left != NULL && node->right == NULL))
		return (0);
	left = full_tree(node->left);
	right = full_tree(node->right);
	if ((left == 1 && right == 0) || (left == 0 && right == 1))
		return (0);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: return 0 if tree is NULL or not full and 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int value;

	if (!tree)
		return (0);
	value = full_tree(tree);
	return (value);
}
