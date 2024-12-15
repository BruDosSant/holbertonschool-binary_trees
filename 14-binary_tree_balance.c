#include "binary_trees.h"

/**
 * messi - mide altura de ambos lados del arbol
 * @tree: pointer al primer nodulo del arbol
 * Return: altura
 */

int messi(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	left = messi(tree->left);
	right = messi(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer al primer nodo del arbol
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (messi(tree->left) - messi(tree->right));
}
