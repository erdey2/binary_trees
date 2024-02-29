#include "binary_trees.h"

/**
 *binary_tree_sibling - display the sibling node
 *@node: the address of a node to be checked its sibling
 *
 *Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
