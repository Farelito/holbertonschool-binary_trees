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
	size_t balance;
	
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
