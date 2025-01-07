#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 *
 * Return: depth of tree, 0 otherwise.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t left_depth, right_depth;
  
  if (tree == NULL)
    {
      return (0);
    }

  left_depth = binary_tree_depth(tree->left);
  right_depth = binary_tree_depth(tree->right);

  if (tree->left != NULL && tree->right != NULL)
    {
      return (0);
    }
  else
    {
      if (left_depth >= right_depth)
	{
	  return (left_depth + 1);
	}
      else
	{
	  return (right_depth + 1);
	}
    }
}
