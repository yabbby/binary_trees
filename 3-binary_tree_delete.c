#include "binary_trees.h"
#include <stdlib.h>

/**
	* binary_tree_delete - deletes an entire binary tree
	* Description: deletes an entire binary tree
	* @tree: root of binary tree to delete
	* Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *leftNode;
	binary_tree_t *rightNode;

	if (!tree)
		return;

	leftNode = tree->left;
	rightNode = tree->right;

	free(tree);

	binary_tree_delete(leftNode);
	binary_tree_delete(rightNode);
}
