#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int sum = 0;
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_balance(tree->left);
	rightHeight = binary_tree_balance(tree->right);


	sum = leftHeight + rightHeight;

	if (tree->parent == NULL)
		return (sum);
	if (tree->left && !tree->right)
		return (sum - 1);
	if (!tree->left && tree->right)
		return (sum - 1);

	if (tree->left || tree->right)
	{
		if (leftHeight > rightHeight)
			return (leftHeight + 1);
		else
			return (rightHeight + 1);
	}
	return (0);
}
