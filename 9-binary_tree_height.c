#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL)
		return (0);

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	if (hleft > hright)
		return (hleft + 1);
	else
		return (hright + 1);
}
