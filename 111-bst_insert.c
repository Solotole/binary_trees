#include "binary_trees.h"
/**
 * bst_insert - function to carry insertion in
 * a BST tree
 * @tree: address to the tree root
 * @value: value to be set in nodes
 *
 * Return: return NULL upon faulure and the newly inserted
 * node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *solo;
	bool boolean = true;

	if (!tree)
		return (NULL);
	if ((*tree) == NULL)
	{
		solo = binary_tree_node(NULL, value);
		*tree = solo;
		return (solo);
	}
	if (value < (*tree)->n && boolean)
	{
		if ((*tree)->left == NULL && boolean)
		{
			solo = binary_tree_node(*tree, value);
			(*tree)->left = solo;
			return (solo);
		}
		else
			return (bst_insert(&((*tree)->left), value));
	}
	else if (value > (*tree)->n && boolean)
	{
		if ((*tree)->right == NULL && boolean)
		{
			solo = binary_tree_node(*tree, value);
			(*tree)->right = solo;
			return (solo);
		}
		else
			return (bst_insert(&((*tree)->right), value));
	}
	else
		return (NULL);
	return (NULL);
}
