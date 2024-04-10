#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect tree 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_L, h_R;
	int bnr_L, bnr_R;

	if (tree == NULL)
		return (0);

	h_L = binary_tree_height(tree->left);
	h_R = binary_tree_height(tree->right);

	if (h_L != h_R)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	bnr_L = binary_tree_is_perfect(tree->left);
	bnr_R = binary_tree_is_perfect(tree->right);

	return (bnr_L && bnr_R);
}
