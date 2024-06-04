#include "binary_trees.h"

/**
	* binary_tree_nodes - counts the nodes with at least 1 child
	* Description: counts the nodes with at least 1 child
	* @tree: root of tree
	* Return: size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0 + binary_tree_nodes(tree->right + binary_tree_nodes(tree->left)));
}
