#include "binary_trees.h"
/**
 * binary_tree_delete - delete all the nodes in binary tree
 * @tree: address of the first node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
