#include "binary_trees.h"

/**
 * binary_tree_leaves - main function.
 * @tree: arg one.
 * Return: int num of leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves = 1;

		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
