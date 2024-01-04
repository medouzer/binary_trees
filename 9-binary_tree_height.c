#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is the tree
 * Return: return the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0, height;

	if (tree == NULL)
		return (0);
	if (tree->left)
		height_left = binary_tree_height(tree->left);
	if (tree->right)
		height_right = binary_tree_height(tree->right);
	if (height_left > height_right)
		height = height_left + 1;
	else
		height = height_right + 1;
	return (height);
}
