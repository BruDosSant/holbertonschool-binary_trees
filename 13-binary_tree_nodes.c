#include "binary_trees.h"

/**
 * binary_tree_nodes - cuenta cantidad de nodos con al menos 1 hijo
 * @tree: pointer al primer nodo del arbol
 * Return: cant de nodos con al menos un hijo
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		else
		{
			if (tree->left != NULL || tree->right != NULL)
			return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
		}
	}
	return (0);
}
