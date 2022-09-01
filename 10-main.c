#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t depth;

	root = NULL;

	depth = binary_tree_depth(root);
	printf("Depth of node (%p): %lu\n", (void *)root, depth);

	return (0);
}
