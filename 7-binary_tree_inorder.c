#include "binary_trees.h"
/**
 * in_order - function to carry out in order binary tree traversal
 * @node: tree to be traversed
 * @func: function to print out node's values
 */
void in_order(const binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;
	in_order(node->left, func);
	func(node->n);
	in_order(node->right, func);
}

/**
 * binary_tree_inorder - function that goes through a binary tree using in-order traversal
 * @tree: tree to be traversed
 * @func: function to print out output node's values
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL && func != NULL)
		in_order(tree, func);
}
