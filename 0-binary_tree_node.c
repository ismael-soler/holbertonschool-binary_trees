#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (parent != NULL)
		newnode->parent = parent;
	else
		newnode->parent = NULL;

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
