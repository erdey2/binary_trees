#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: address of the first node
 *
 * Return: the total nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + (binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right)));
	}
	else
		return (0);
}
