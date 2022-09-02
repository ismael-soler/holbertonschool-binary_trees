#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node
 * Return: pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}


/**
 * binary_tree_sibling - find the sibiling of a node
 * @node: node
 * Return: pointer to the sibiling of @node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int currentNodePosition = 0; /*0 is left, 1 is right*/

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left != node)
		currentNodePosition = 1;

	if (currentNodePosition == 1)
		if (node->parent->left)
			return (node->parent->left);

	if (currentNodePosition == 0)
		if (node->parent->right)
			return (node->parent->right);

	return (NULL);
}
