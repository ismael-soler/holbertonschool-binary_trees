#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the lef-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value
 * Return: pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *aux;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = newnode;

	else
	{
		newnode->right = parent->right;
		newnode->parent = parent;
		newnode->right->parent = newnode;
	}

	return (newnode);
}
