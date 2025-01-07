#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 *                     with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of nodes, 0 and 1 otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
  size_t count_nodes = 0;
  
  if (tree == NULL)
    {
      return (0);
    }
  
  if (tree != NULL)
    {
      binary_tree_nodes(tree->left);
      count_nodes = count_nodes + 1;
      binary_tree_nodes(tree->right);
    }
  return (count_nodes);
}
