#include "binary_trees.h"
/**
 * binary_tree_is_root - checks a node is root node or not
 * @node: the node to be checked
 *
 * Return: 1 if the node is root node 0 if it is not
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	if (node == NULL || node->parent != NULL)
		return (0);
}
