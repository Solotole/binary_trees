#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: return NULL if node is null or if node has no
 * uncle and the uncle node otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *required, *mother;

	if (node == NULL || node->parent == NULL ||
			 node->parent->parent == NULL)
		return (NULL);
	mother = node->parent;
	if ((mother->parent)->right == mother)
		required = (mother->parent)->left;
	else if ((mother->parent)->left == mother)
		required = (mother->parent)->right;
	else
		required = NULL;
	return (required);
}
