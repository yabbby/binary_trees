#include "binary_trees.h"

/**
	* binary_tree_is_full - checks if a binary tree is full
	* Description: checks if a binary tree is full
	* @tree: root of tree to check if it's full
	* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isLeftFull;
	int isRightFull;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		isLeftFull = binary_tree_is_full(tree->left);
		isRightFull = binary_tree_is_full(tree->right);
		return (isLeftFull == 1 && isRightFull == 1);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
