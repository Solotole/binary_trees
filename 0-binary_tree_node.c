#include "binary_trees.h"
/**
 * binary_tree_node - function that adds a new node to tree
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the newly created node
 *
 * Return: pointer to the newly created node or NULL upon failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *new_node = parent;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	if (new_node == NULL)
		parent = node;
	else if (new_node != NULL)
		node->parent = new_node;
	return (node);
}
