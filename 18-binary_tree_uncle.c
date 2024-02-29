#include "binary_trees.h"

/**
 *binary_tree_uncle - display the uncle of a given node
 *@node: the address of a node to be checked its uncle
 *
 *Return: sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
