#include "binary_trees.h"
/**
 * array_to_bst - function that inserts values in
 * BST from an array
 * @array: pointer to an array
 * @size: size of the array
 *
 * Return: return NULL upon failure or root node
 * on success
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root_node = NULL, *node;
	size_t j = 0;

	if (array == NULL || size == 0)
		return (NULL);
	while (j < size)
	{
		node = bst_insert(&root_node, *(array + j));
		if (node == NULL)
			return (NULL);
		j++;
	}
	return (root_node);
}
