#include "binary_trees.h"
/**
 * pre_order - recursive pre oreder function
 * @root: pointer of the node
 * @func: pointer to a function responsible for printing
 * Return: return void
 */
void pre_order(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL)
		return;
	func(root->n);
	pre_order(root->left, func);
	pre_order(root->right, func);
}
/**
 * binary_tree_preorder - function that goes through a binary
 * tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: return void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL && func != NULL)
		pre_order(tree, func);
}
