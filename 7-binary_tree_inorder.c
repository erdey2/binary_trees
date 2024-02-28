#include "binary_trees.h"
/**
 * binary_tree_inorder - print nodes inorder(left->parent->right)
 * @tree: the address of the root node
 * @func: function address
 *
 * Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
