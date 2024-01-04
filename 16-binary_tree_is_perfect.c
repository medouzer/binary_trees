#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is the tree
 * Return: return the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		height_left = binary_tree_height(tree->left);
	if (tree->right)
		height_right = binary_tree_height(tree->right);
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is the tree
 * Return: the height of the tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if ((left_height == right_height) &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
