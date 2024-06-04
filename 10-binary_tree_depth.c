#include "binary_trees.h"

/**
	* binary_tree_depth - measures the depth of a node in a binary tree
	* Description: measures the depth of a node in a binary tree
	* @tree: node to get the depth of
	* Return: size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
