#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - calculates the balance factor of a
 * binary tree node
 * @tree: pointer to the node to calculate the balance factor
 * Return: balance factor of the node, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_L = 0;
	size_t h_R = 0;

	if (tree == NULL)
		return (0);

	h_L = binary_tree_height(tree->left);
	h_R = binary_tree_height(tree->right);

	return (h_L - h_R);
}
