#include "binary_trees.h"

/**
	* binary_tree_leaves - counts the leaves in a binary tree
	* Description: counts the leaves in a binary tree
	* @tree: root of binary tree
	* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftSize;
	size_t rightSize;

	if (!tree)
		return (0);

	leftSize = binary_tree_leaves(tree->left);
	rightSize = binary_tree_leaves(tree->right);

	if (tree->left || tree->right)
		return (0 + leftSize + rightSize);
	else
		return (1 + leftSize + rightSize);
}
