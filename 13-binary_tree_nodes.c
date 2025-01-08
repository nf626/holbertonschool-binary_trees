#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: number of leaves, 0 and 1 otherwise.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size of binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
}
/**
 * binary_tree_nodes - function that counts the nodes
 *                     with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of nodes, 0 and 1 otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}
else
{
return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
}
