#include "binary_trees.h"

/**
 * binary_tree_inorder - main function
 * @tree: arg one
 * @func: arg two
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
