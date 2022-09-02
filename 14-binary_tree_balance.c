#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	if (!tree->left && tree->right)
		return (-binary_tree_height(tree));
	if (!tree->right && tree->left)
		return (binary_tree_height(tree));

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}
