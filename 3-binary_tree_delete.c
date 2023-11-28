#include "binary_trees.h"

/**
 * binary_tree_delete - main function
 * @tree: arg one.
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
}
