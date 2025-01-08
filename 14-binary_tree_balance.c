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
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: measured balanced factor, 0 otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  int left = 0, right = 0, df = 0;
  if (tree == NULL)
    {
      return (0);
    }
  else
    {
      left = (int)binary_tree_height(tree->left);
      right = (int)binary_tree_height(tree->right);
      df = left - right;
    }
  return (df);
}
