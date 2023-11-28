#include "binary_trees.h"

/**
 * binary_tree_is_root - function one.
 * @node: arg one.
 * Return: 0 or 1.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}

	return (1);
}
