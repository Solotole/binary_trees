#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: pointer to the node to check
 * Return: return 1 if node is a root, otherwise 0 and 0 incase the
 * passed pointer is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int value = 3; /*just random assignment-could be a million*/

	if (node == NULL)
		value = 0;
	else if (node->parent == NULL)
		value = 1;
	else
		value = 0;
	return (value);
}
