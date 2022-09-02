#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root of the tree
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t totalHeight = 0, totalNodes = 0, nodesNumber = 0;

	if (!tree)
		return (0);

	/* Calcula h */
	totalHeight = binary_tree_height(tree);
	/* Calcula cantidad de nodes */
	totalNodes = binary_tree_size(tree);

	nodesNumber = (_pow(2, totalHeight + 1) - 1);

	if (totalNodes == nodesNumber)
		return (1);
	return (0);
}


/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		if (leftHeight > rightHeight)
			return (leftHeight + 1);
		else
			return (rightHeight + 1);
	}
	return (0);
}


/**
 * binary_tree_size - measures the size of a binary tree
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


/**
 * _pow - returns te value of x raised to the power of y
 * @x: x
 * @y: y
 * Return: if y is lower than 0 returns -1
 */

int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}
