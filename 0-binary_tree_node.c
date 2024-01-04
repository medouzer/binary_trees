#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: is the parent of the node
 * @value: is the value of the node
 * Return: return the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
