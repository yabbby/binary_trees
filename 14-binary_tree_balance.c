#include "binary_trees.h"

/**
	* binary_tree_height - finds the height of a binary tree
	* Description: finds the height of a binary tree
	* @tree: root of binary tree
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

/**
	* binary_tree_balance - measures the balance factor of a binary tree
	* Description: measures the balance factor of a binary tree
	* @tree: root node of tree to measure
	* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft;
	int heightRight;
	int leftFactor = 0;
	int rightFactor = 0;

	if (!tree)
		return (0);

	if (tree->left)
		leftFactor = 1;

	heightLeft = leftFactor + binary_tree_height(tree->left);

	if (tree->right)
		rightFactor = 1;

	heightRight = rightFactor + binary_tree_height(tree->right);

	return (heightLeft - heightRight);
}
