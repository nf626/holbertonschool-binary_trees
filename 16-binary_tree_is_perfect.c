#include "binary_trees.h"

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
* power_to - function that calculates the value x to the power of y.
* @x: value.
* @y: power to raise x to.
*
* Return: x to the power of y, 1 if power to 0, -1 negative.
*/
int power_to(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * power_to(x, y - 1));
}
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height = 0, nodes = 0, power = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);
power = (size_t)power_to(2, height + 1);

return (nodes == power - 1);
}
