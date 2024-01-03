#include "binary_trees.h"

/**
 * binary_tree_depth: function that measures the depth of a node in a binary tree
 * @tree: is the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);
    if (tree->parent)
        depth = binary_tree_depth(tree->parent) + 1;
    return (depth);
}
