#include "binary_trees.h"

/**
 * depth - function to find node depth
 * @tree: tree to check for it's depth
 *
 * Return: return node depth
 */
int depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	int to_root = 0;

	while (node)
	{
		to_root++;
		node = node->parent;
	}
	return (to_root);
}

/**
 * pre_order_leaf - preorder traversal
 * @tree: tree to traverse through
 * @height: height of the tree
 *
 * Return: return 0 if not perfect or 1 otherwise
 */
int pre_order_leaf(const binary_tree_t *tree, int height)
{
	int left, depth_to_root, right;

	depth_to_root = depth(tree);
	if (!tree->left && !tree->right && depth_to_root == height)
		return (1);
	if (!tree->left && !tree->right && depth_to_root != height)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	left = pre_order_leaf(tree->left, height);
	right = pre_order_leaf(tree->right, height);
	if ((left == 0 && right == 1) || (right == 0 && left == 1))
		return (0);
	if (right == 1 && left == 1)
		return (1);
	return (1);
}

/**
 * height - function to check height of the tree
 * @tree: tree to find it's height
 *
 * Return: return 0 if tree is NULL or tree height
 * otherwise
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	if (left >= right)
		return (left + 1);
	if (right > left)
		return (right + 1);
	return (0);
}

/**
 * binary_tree_is_perfect - function to check if tree is
 * perfect
 * @tree: tree to check
 * Return: return 1 if perfet and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf,tree_height;

	if (tree == NULL)
		return (0);
	tree_height = height(tree);
	leaf = pre_order_leaf(tree, tree_height);
	return (leaf);
}
