#include "binary_trees.h"

/**
 * binary_tree_inorder - recorre un arbol binario en orden.
 * @tree: es el nodo inicial del arbol
 * @func: pointer a funcion que llama a cada nodulo
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
