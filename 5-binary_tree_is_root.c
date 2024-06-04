#include "binary_trees.h"

/**
	* binary_tree_is_root - checks if a given node is the root node
	* Description: checks if a given node is the root node
	* @node: node to check if its root node or not.
	* Return: int
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->parent);
}
