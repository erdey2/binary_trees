#include "binary_trees.h"
/**
 * binary_tree_height - print the height of a given bt
 * @tree: the address of the root node
 *
 * Return: the height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		return (1 + max(binary_tree_height(tree->left),
					binary_tree_height(tree->right)));
	}
}
