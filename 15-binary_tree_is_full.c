#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isLeftFull = 0, isRightFull = 0;

	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);

	isLeftFull = binary_tree_is_full(tree->left);
	isRightFull = binary_tree_is_full(tree->right);

	if (tree->left && tree->right)
		if (isLeftFull && isRightFull)
			return (1);
	return (0);
}
