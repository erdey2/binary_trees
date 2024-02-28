#include "binary_trees.h"
/**
 * binary_tree_size - print the size of a given binary tree
 * @tree: the address of the root node
 *
 * Return: the size
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		return (1 + max(binary_tree_size(tree->left), binary_tree_size(tree->right)));
	}
}
