#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal
 * @tree: is the tree to applied the func on eche element of the tree
 * @func: is function to applie in each node
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
