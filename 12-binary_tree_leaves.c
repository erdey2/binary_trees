#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves
 * @tree: address of the first node
 * 
 * Return: the total leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
	{
		total += 1;
	}
	return (total);
}
