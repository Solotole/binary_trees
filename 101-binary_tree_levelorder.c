#include "binary_trees.h"
/**
 * node_height - function calculating tree height
 * @tree: node to find its height
 *
 * Return: return tree height
 */
int node_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = node_height(tree->left);
	right = node_height(tree->right);
	if (left >= right)
		return (left + 1);
	if (right > left)
		return (right + 1);
	return (0);
}

/**
 * level_order_traversal - function to conduct level order traversal
 * and print value of the node
 * @node: node pointer
 * @i: tree height
 * @func: pointer to a function to print node's value
 */
void level_order_traversal(const binary_tree_t *node, int i, void (*func)(int))
{
	if (node == NULL)
		return;
	if (i == 0)
		func(node->n);
	else
	{
		level_order_traversal(node->left, i - 1, func);
		level_order_traversal(node->right, i - 1, func);
	}
}
/**
 * binary_tree_levelorder - function that goes through a
 * binary tree using level-order traversal
 * @tree: root node of the tree
 * @func: pointer to a function that prints node;s value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i = 0;

	height = node_height(tree);
	while (i < height)
	{
		level_order_traversal(tree, i, func);
		i++;
	}
}
