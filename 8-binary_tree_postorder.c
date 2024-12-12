#include "binary_trees.h"

/**
 * binary_tree_postorder - recorre un arbol binario de forma post-transverso
 * @tree: es el nodo inicial del arbol
 * @func: pointer a funcion que llama a cada nodulo
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
