#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance of the tree (0, 1, -1)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_L = 0, h_R = 0, balance;

	if (tree == NULL)
		return (0);

	h_L = binary_tree_height(tree->left);
	h_R = binary_tree_height(tree->right);

	if (tree->left != NULL)
		h_L++;

	if (tree->right != NULL)
		h_R++;

	balance = h_L - h_R;

	return (balance);
}
