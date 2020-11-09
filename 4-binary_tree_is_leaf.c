#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf.
 * @node: pointer to the node to check.
 * Return: 1 if node else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);
}
