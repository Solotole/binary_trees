#include "binary_trees.h"

/**
 * post_order_delete - post order deleting function
 * @node: root node of the tree
 */
void post_order_delete(binary_tree_t *node)
{
	if (node == NULL)
		return;
	post_order_delete(node->left);
	post_order_delete(node->right);
	free(node);
}

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
		post_order_delete(tree);
}
