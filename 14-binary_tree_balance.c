#include "binary_trees.h"
/*balance factor is difference of left and right subtrees*/
/**
 * tree_height - function to calculate height of
 * the tree node
 * @root: node to be traversed
 *
 * Return: return height of the tree
 */
int tree_height(const binary_tree_t *root)
{
	int left, right, total;

	if (root == NULL)
		return (0);
	left = tree_height(root->left);
	right = tree_height(root->right);
	if (left >= right)
		return (left + 1);
	if (right > left)
		return (right + 1);
	total = left - right;
	return (total);
}

/**
 * tree_balance - function that calculates tree
 * balance factor
 * @root: root of the tree
 *
 * Return: return tree balance factor
 */
int tree_balance(const binary_tree_t *root)
{
	int left_balance, right_balance;

	if (root == NULL)
		return (0);
	left_balance = tree_height(root->left);
	right_balance = tree_height(root->right);
	return (left_balance - right_balance);
}
/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: tree to be traversed
 *
 * Return: return balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);
	count = tree_balance(tree);
	return (count);
}
