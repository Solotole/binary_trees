#include "binary_trees.h"

/**
 * node_count - function to count nodes except leaves
 * @root: root node of the tree or subtree
 *
 * Return: return 0 if NULL or count otherwise
 */
size_t node_count(const binary_tree_t *root)
{
	size_t left, right, total;

	if (root == NULL)
		return (0);
	if (root->left == NULL && root->right == NULL)
		return (0);
	left = node_count(root->left);
	right = node_count(root->right);
	total = left + right + 1;
	return (total);
}
/**
 * binary_tree_nodes - function that counts nodes
 * except leaf nodes
 * @tree: root node of tree
 * Return: return the nodes count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = node_count(tree);
	return (count);
}
