#include "binary_trees.h"

/**
 * binary_tree_balance - function one.
 * @tree: arg one.
 * Return: NULL or 0 else balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - function two
 * @tree: arg one.
 * Return: NULL or 0 else height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0, xx = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		xx = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((x > xx) ? x : xx);
	}
	return (0);
}
