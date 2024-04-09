#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in
 * a binary tree
 * @tree: pointer to the root node of the tree to count
 * the number of leaves
 *
 * Return: return 0 if tree is NULL or count of leaves
 * otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;
	if (tree == NULL)
		leaves = 0;
	else if (tree->left != NULL && tree->right != NULL)
		leaves = 2;
	else if ((tree->left != NULL && tree->right == NULL)
			 || (tree->right != NULL && tree->left == NULL))
		leaves = 1;
	else if (tree->left == NULL && tree->right == NULL)
		leaves = 1;
	return (leaves);
}
