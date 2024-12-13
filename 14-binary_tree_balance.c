#include "binary_trees.h"

int messi(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left += messi(tree->left);
	right += messi(tree->right);

	if (left > right)
		return (left + 1);

	else
		return (right + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL || tree->right == NULL)
		return (0);

	else
		return (messi(tree->left) - messi(tree->right));
}
