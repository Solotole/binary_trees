#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs a
 * right-rotation on a binary tree
 * @tree: pointer to the newly rotated root
 *
 * Return: the newly rotated root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->left)
		return (NULL);
	node = tree->left;
	tree->left = node->right;
	if (tree->parent)
		(tree->parent)->left = node;
	if (node->right)
		(tree->left)->parent = tree;
	node->right = tree;
	node->parent = tree->parent;
	tree->parent = node;
	return (node);
}
