#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value:
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *aux;

	newnode = binary_tree_node(parent, value);

	aux = parent->right;
	parent->right = newnode;
	newnode->parent = parent;
	if (aux)
		aux->parent = newnode;
	newnode->right = aux;
	newnode->n = value;

	return (newnode);
}
