#include "binary_trees.h"

/**
* array_to_heap - builds a Max Binary Heap tree from an array.
* @array: pointer to the first element of the array to be converted.
* @size: number of element in the array.
* Return: pointer to the root of the created Binary Heap, or NULL on failure.
*/
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree = NULL;
	size_t pos;

	for (pos = 0; pos < size; pos++)
		heap_insert(&tree, array[pos]);
	return (tree);
}