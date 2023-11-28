#include "binary_trees.h"

/**
 * binary_tree_size - main function
 * @tree: arg one.
 * Return: size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree = 0;

	if (tree)
	{
		size_tree += 1;
		size_tree += binary_tree_size(tree->left);
		size_tree += binary_tree_size(tree->right);
	}
	return (size_tree);
}
