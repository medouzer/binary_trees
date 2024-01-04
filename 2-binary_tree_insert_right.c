#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 * @parent: is the parent of the node
 * @value: is the value of the node
 * Return: return the pointer to the right node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
