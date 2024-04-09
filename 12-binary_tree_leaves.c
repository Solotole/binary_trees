#include "binary_trees.h"

/**
 * counting_leaves - function to count leaves
 * @root: tree's node to count leaves from
 *
 * Return: return 0 if root is NULL and leaves count otherwise
 */
size_t counting_leaves(const binary_tree_t *root)
{
	size_t left, right, total;

	if (root == 0)
		return (0);
	if (root->left == NULL && root->right == NULL)
		return (1);
	left = counting_leaves(root->left);
	right = counting_leaves(root->right);
	total = left + right;
	return (total);
}

/**
 * binary_tree_leaves - function that counts the leaves in
 * a binary tree
 * @tree: pointer to the root node of the tree to count
 * the number of leaves
 * Return: return 0 if tree is NULL or count of leaves
 * otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	leaves = counting_leaves(tree);
	return (leaves);
}
