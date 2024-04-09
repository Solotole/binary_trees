#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: return NULL if either node, node->parent, no node's sibling
 * is null and the sibling otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *before, *required;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	before = node->parent;
	if (before->right == node)
		required = before->left;
	else if (before->left == node)
		required = before->right;
	else if (before->left == node && before->right == NULL)
		required = NULL;
	else if (before->right == node && before->left == NULL)
		required = NULL;
	return (required);
}
