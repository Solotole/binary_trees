#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function to conduct
 * left rotate
 * @tree: tree root node
 *
 * Return: return the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->right)
		return (NULL);
	node = tree->right;
	if (tree->parent)
	{
		if (tree == tree->parent->left)
			(tree->parent)->left = node;
		else
			(tree->parent)->right = node;
	}
	node->parent = tree->parent;
	tree->right = node->left;
	if (node->left)
		(node->left)->parent = tree;
	node->left = tree;
	tree->parent = node;
	return (node);
}
