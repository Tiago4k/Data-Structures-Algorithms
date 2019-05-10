#include <iostream>
#include <string>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* larger_BST(){
    
    TreeNode<int>* l_bst = new TreeNode<int>(8, new TreeNode<int>(4, new TreeNode<int>(2, new TreeNode<int>(1),new TreeNode<int>(3)),new TreeNode<int>(6, new TreeNode<int>(5),new TreeNode<int>(7))), 
        new TreeNode<int>(10, new TreeNode<int>(12, new TreeNode<int>(9), new TreeNode<int>(11)), new TreeNode<int>(14, new TreeNode<int>(13),new TreeNode<int>(15))));
    
    l_bst->traverse();
    return l_bst;
}

void printTreePreOrder(TreeNode<int>* tree)
{
    cout << tree->item << endl;
    printTreePreOrder(tree->left);
    printTreePreOrder(tree->right);
}

int max_item(TreeNode<int>* tree)
{
    TreeNode<int>* i_tree = tree;
       
    if(i_tree->right == NULL){
            
        return (i_tree->item);    
    }
    
    return max_item(i_tree->right);
    
}

int min_item(TreeNode<int>* tree)
{
    TreeNode<int>* i_tree = tree;
       
    if(i_tree->left == NULL){
            
        return (i_tree->item);    
    }
    
    return min_item(i_tree->left);
    
}


int main(){


	TreeNode<int> *i_tree = new TreeNode<int>(5);
	i_tree = i_tree->insert(i_tree, 21);
	i_tree = i_tree->insert(i_tree, 3);
	i_tree = i_tree->insert(i_tree, 25);
	i_tree = i_tree->insert(i_tree, 30);
	i_tree = i_tree->insert(i_tree, 10);
	i_tree = i_tree->insert(i_tree, 22);
	i_tree = i_tree->insert(i_tree, 1);
	// print the tree
	//i_tree->traverse(); cout << endl;
	
	cout<<"The biggest item in the tree is: "<< max_item(i_tree)<< endl;
	cout<<"The smallest item in the tree is: "<< min_item(i_tree)<<endl;
	
	// delete i_tree to free memory
	delete i_tree;
	
	return 0;
}
