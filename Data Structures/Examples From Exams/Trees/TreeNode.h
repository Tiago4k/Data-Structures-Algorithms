Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@Tiago4k 
0
0 0 Tiago4k/Data-Structures-Algorithms
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights  Settings
Data-Structures-Algorithms/Data Structures/Examples from exam/Trees/TreeNode.h
@Tiago4k Tiago4k Create TreeNode.h
62ef0ee 5 minutes ago
91 lines (75 sloc)  1.49 KB
    

#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;
// An object of type TreeNode holds three things: 
//		- an item (of type T)
//		- a left subtree
//		- a right subtree

template <typename T>
class TreeNode
{
public:
	TreeNode(T i, TreeNode<T>* l, TreeNode<T>* r);
	TreeNode(T i);
	~TreeNode();

	TreeNode<T> *insert(TreeNode<T>* tree, T item);
	void traverse();

	// The three things held in a TreeNode
	T item;
	TreeNode<T> *left, *right;
};

template <typename T>
TreeNode<T>::TreeNode(T i, TreeNode<T>* l, TreeNode<T>* r)
	: item(i), left(l), right(r)
{
}

template <typename T>
TreeNode<T>::TreeNode(T i)
	: item(i), left(0), right(0)
{
}

template <typename T>
TreeNode<T>::~TreeNode()
{
	if (left) delete left;
	if (right) delete right;
}

template <typename T>
TreeNode<T>* TreeNode<T>::insert(TreeNode<T>* tree, T item)
{  
	// Inserts item in tree, and returns the new tree
	if (tree == 0)
		tree = new TreeNode<T>(item);
	else
		if (item < tree->item)
			tree->left = insert(tree->left, item);
		else
			tree->right = insert(tree->right, item);
	return tree;
}

template <typename T>
void TreeNode<T>::traverse()
{
	if (left != 0)
		left->traverse();
	cout << item << endl;
	if (right != 0)
		right->traverse();
}

// template <typename T>
// void TreeNode<T>::getItem()
// {
//     return item;
// }

// template <typename T>
// void TreeNode<T>::getRight()
// {
//     return right;
// }

// template <typename T>
// void TreeNode<T>::getLeft()
// {
//     return left;
// }


#endif
© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About

