#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if @node is root
 *
 * @node: root
 * Return: 1 if root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}
