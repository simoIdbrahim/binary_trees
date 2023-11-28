#include "binary_trees.h"

/**
 * binary_tree_height - main function.
 * @tree: arg one
 * Return: 0 else height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0, xx = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		xx = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((x > xx) ? x : xx);
	}
	return (0);
}
