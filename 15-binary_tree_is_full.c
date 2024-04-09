#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: return 0 if tree is NULL or not full and 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int value;
	const binary_tree_t *node1, *node2;

	if (tree == NULL)
		return (0);
	else if (tree->right != NULL && tree->left != NULL)
	{
		node1 = tree->right;
		node2 = tree->left;
		if ((node2->right != NULL || node2->left != NULL) &&
				 (node1->right != NULL || node1->left != NULL))
			value = 0;
		else if (node2->right == NULL && node2->left == NULL &&
				 node1->left == NULL && node1->right == NULL)
			value = 1;
	}
	else if ((tree->right == NULL && tree->left != NULL) ||
			 (tree->right != NULL && tree->left == NULL))
		value = 0;
	return (value);
}
