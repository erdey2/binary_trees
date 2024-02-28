#include "binary_trees.h"
/**
 * binary_tree_node - create a node
 * @parent: address to the parent node
 * @value: the data part of the node
 *
 * Return: the address of the root node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		printf("memory allocation error\n");
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
