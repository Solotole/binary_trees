#include "binary_trees.h"

/**
 * find_ancestor - function that finds and records ancestors of node
 * @node: node to find it's ancestors
 * @array: pointer to an array to store addresses of the ancestors arrays
 *
 * Return: return the length of the pointer array
 */
int find_ancestors(const binary_tree_t *node, binary_tree_t **array)
{
	int length = -1;

	while (node)
	{
		array[length++] = (binary_tree_t *)node;
		node = node->parent;
	}
	return (length);
}

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: return the common ancestor or NULL otherwise
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int i, j, height1, height2;
	binary_tree_t *ancestor1[100], *ancestor2[100];

	if (!first || !second)
		return (NULL);
	height1 = find_ancestors(first, ancestor1);
	height2 = find_ancestors(second, ancestor2);
	for (i = 0; i < height1; i++)
	{
		for (j = 0; j < height2; j++)
		{
			if (ancestor1[i] == ancestor2[j])
				return (ancestor2[j]);
		}
	}
	return (NULL);
}
