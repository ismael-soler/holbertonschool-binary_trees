#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum;
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_size(tree->left);
	rightHeight = binary_tree_size(tree->right);

	sum = leftHeight + rightHeight;

	return (sum + 1);
}
