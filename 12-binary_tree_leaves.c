#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t lvs_L = 0;
    size_t lvs_R = 0;

    if (tree == NULL)
		return (0);

    if (tree->left == NULL && tree->right == NULL)
        return 1;

    lvs_L = binary_tree_leaves(tree->left);
    lvs_R = binary_tree_leaves(tree->right);

	return (lvs_L + lvs_R);
}
