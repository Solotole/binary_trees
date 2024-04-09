#include "binary_trees.h"

/**
 * post_order - function to conduct the post order traveral
 * @node: the root node
 * @func: pointer to a node's value printing
 */
void post_order(const binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;
	post_order(node->left, func);
	post_order(node->right, func);
	func(node->n);
}

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: root node of the tree
 * @func: pointer to a node's value printing function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL && func != NULL)
		post_order(tree, func);
}
