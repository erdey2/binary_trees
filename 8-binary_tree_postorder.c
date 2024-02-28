#include "binary_trees.h"
/**
 * binary_tree_postorder - print nodes postorder(left->right->parent)
 * @tree: the address of the root node
 * @func: function address
 *
 * Return: void
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
