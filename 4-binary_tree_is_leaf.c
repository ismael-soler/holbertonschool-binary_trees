#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a tree
 *
 * @node: node to be checked
 * Return: 1 is node is a leaf, 0 otherwise
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);

	return (1);
}
