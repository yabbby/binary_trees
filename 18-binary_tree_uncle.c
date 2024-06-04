#include "binary_trees.h"

/**
	* binary_tree_sibling - finds the sibling of a node
	* Description: finds the sibling of a node
	* @node: node to find a sibling for
	* Return: binary_tree_t
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!node || !node->parent)
		return (NULL);

	tmp = node->parent;
	if (tmp->left && tmp->left == node)
	{
		if (tmp->right)
			return (tmp->right);
	}
	else if (tmp->right && tmp->right == node)
	{
		if (tmp->left)
			return (tmp->left);
	}
	return (NULL);
}

/**
	* binary_tree_uncle - finds the uncle of a node
	* Description: finds the uncle of a node
	* @node: node to return the uncle of
	* Return: binary_tree_t
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
