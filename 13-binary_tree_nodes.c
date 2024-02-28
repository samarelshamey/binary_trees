#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child 
 * @tree: pointer to the root node 
 * Return: integer
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	ize_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
