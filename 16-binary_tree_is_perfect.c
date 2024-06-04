#include "binary_trees.h"

/**
	* num_nodes - calculates the number of nodes in a tree
	* @tree: binary tree to get the number of nodes of
	* Description: calculates the number of nodes in a tree
	* Return: int
*/
int num_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + num_nodes(tree->left) + num_nodes(tree->right));
}

/**
	* binary_tree_is_perfect - checks if a binary tree is perfect
	* Description: checks if a binary tree is perfect
	* @tree: pointer to the root node of the tree to check
	* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (num_nodes(tree->left) == num_nodes(tree->right));
}
