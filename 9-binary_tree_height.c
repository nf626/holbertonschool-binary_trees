#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree, 0 otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
{
return (0);
}
else
{
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height >= right_height)
{
return (left_height + 1);
}
else
{
return (right_height + 1);
}
}
}
