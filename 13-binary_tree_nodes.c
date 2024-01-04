#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: is the tree
 * Return: return the number of nodes with one child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		counter = 1;
	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);
	return (counter);
}
