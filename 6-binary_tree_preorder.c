#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: is the tree to applied the func on eche element of the tree
 * @func: is function to applie in each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
