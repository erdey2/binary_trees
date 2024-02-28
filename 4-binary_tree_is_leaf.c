#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks a node is leaf or not
 * @node: the node to be checked
 *
 * Return: 1 if the node is leaf 0 if it is not
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
