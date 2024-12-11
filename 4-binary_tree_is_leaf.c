#include "binary_trees.h"

/**
 * binary_tree_is_leaf - chechkea si un nodulo es una hoja
 * @node: nodulo a analisar
 * Return: 1 si es una leaf o 0 si no lo es
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
