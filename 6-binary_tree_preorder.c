#include "binary_trees.h"

/**
 * binary_tree_preorder - recorre un arbol binario en pre-orden.
 * @tree: es el nodo inicial del arbol
 * @func: pointer a funcion que llama a cada nodulo
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
