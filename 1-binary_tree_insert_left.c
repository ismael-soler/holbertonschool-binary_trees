#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the lef-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value:
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *aux;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);

	aux = parent->left;
	parent->left = newnode;
	newnode->parent = parent;
	if (aux)
		aux->parent = newnode;
	newnode->left = aux;
	newnode->n = value;

	return (newnode);
}
