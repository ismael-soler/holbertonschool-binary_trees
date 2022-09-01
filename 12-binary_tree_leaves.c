#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: height
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (!tree->left && !tree->right)
		return (sum + 1);

	if (tree->left)
		sum += binary_tree_leaves(tree->left);
	if (tree->right)
		sum += binary_tree_leaves(tree->right);

	return (sum);
}
