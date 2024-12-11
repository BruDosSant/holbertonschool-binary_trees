#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: es el nodulo a analizar
 * Return: 1 si es root o 0 si no lo es
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
