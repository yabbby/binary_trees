#include "binary_trees.h"

/**
	* binary_tree_height - measures the height of a binary tree
	* Description: measures the height of a binary tree
	* @tree: pointer to root node of binary tree
	* Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft;
	size_t heightRight;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	heightLeft = 1 + binary_tree_height(tree->left);
	heightRight = 1 + binary_tree_height(tree->right);

	if (heightLeft > heightRight)
		return (heightLeft);
	else
		return (heightRight);
}
