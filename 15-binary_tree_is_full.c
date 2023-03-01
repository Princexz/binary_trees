#include "binary_trees.h"
/**
  * binary_tree_is_full - counts the leaves in a binary tree
  * @tree: pointer to the root node of tree
  *
  * Return: number of leaves or 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
