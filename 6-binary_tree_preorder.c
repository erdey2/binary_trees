#include "binary_trees.h"
/**
 * binary_tree_preorder - print nodes in preorder(parent->left->right)
 * @tree: the address of the root node
 * @func: function address
 *
 * Return: void
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
	return;
}
