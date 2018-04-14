/*

Week 7 Assignment 1: Binary Tree Part 1

Create a class (BinaryTree) template that will create a binary tree that can hold values of any data type.

The class should provide functions to insert a node, a function to delete a node, functions
to display the tree In Order, Pre Order and Post Order.

It should also provide a member function to search the tree for a value.

The class should provide

a function that counts the number of nodes in the tree,

a function to count the number leaf nodes in the tree, and a function that determines the height of the tree.

The height of a tree is the number of levels the tree has.

Write a program that shows all these functions work.

----------------------------------------------------
Author : Tam T.Tran
Created : August 10, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------
*/

#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H

// Binary Tree template

template <class T>

class BinaryTree {

private:

	struct TreeNode {
		
		T val;										// value in the node
		TreeNode *left;								// Pointer to the left child
		TreeNode *right;							// Pointer to the right child
	};

	TreeNode *root;									// pointer to the root node

	int totalNodes;									// stores total nodes
	int leafNodes;									// stores leaf nodes
	int treeHeight;									// stores tree height

	// private member functions

	void insert(TreeNode *&, TreeNode *&);			// insert

	void destroySubTree(TreeNode *);				// subtree destruction
	void deleteNode(T, TreeNode *&);				// delete a node
	void makeDeletion(TreeNode *&);					// delete a node

	void displayInOrder(TreeNode *) const;			// displays nodes in order
	void displayPreOrder(TreeNode *)const;			// displays nodes pre order no sorting
	void displayPostOrder(TreeNode *)const;			// displays nodes post order

	int countNodes(TreeNode *);						// count nodes
	int countLeafNodes(TreeNode *);					// count the leaf nodes
	int countTreeHeight(TreeNode *);				// count the height of nodes.
	int maximum(T, T);								// hold the maximum nodes function

public:

	// Constructor

	BinaryTree()
	{
		root = nullptr;
	}

	// Destructor

	~BinaryTree() {
		destroySubTree(root);
	}


	// Binary tree operations

	void insertNode(T);
	bool searchNode(T);
	void remove(T);

	void displayInOrder()const
	{
		displayInOrder(root);
	}

	void displayPreOrder() const {
		displayPreOrder(root);
	}

	void displayPostOrder() const {
		displayPostOrder(root);
	}


	int countNodes() {

		countNodes(root);
			return totalNodes;
	}

	int countLeafNodes() {
		countLeafNodes(root);
		return leafNodes;
	}

	int countTreeHeight() {
		countTreeHeight(root);
		return treeHeight;
	}
};

// insert accepts a TreeNode pointer and a pointer to a node.
// The function inserts the node into the tree pointed to by
// the TreeNode pointer.  This function is called recursively.

template <class T>
void BinaryTree<T>::insert(TreeNode *&nodePtr, TreeNode *&newNode) {

	if (nodePtr == nullptr)
		nodePtr = newNode;							// Insert the node

	else if (newNode->val < nodePtr->val)
		insert(nodePtr->left, newNode);				// search the left branch

	else
		insert(nodePtr->right, newNode);			// search the right branch

}

// insertNode creates a new node to hold num as its value
// and passes it to the insert function.

template <class T>
void BinaryTree<T>::insertNode(T item) {
	
	TreeNode *newNode = nullptr;						//pointer to a new node

	// Create a new node and store num in it.

	newNode = new TreeNode;
	newNode->val = item;
	newNode->left = newNode->right = nullptr;

	// insert the node

	insert(root, newNode);
}

// DestroySubTree is called by the destructor.  It
// deletes all nodes in the tree.

template <class T>
void BinaryTree<T>::destroySubTree(TreeNode *nodePtr) {

	if (nodePtr) {
		if (nodePtr->left) 
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);

		delete nodePtr;
	}

}

// SearchNode determines if a vlue is present in the tree
// if so, teh function returns true.  Otherwise, false.

template <class T>
bool BinaryTree<T>::searchNode(T item) {
	
	TreeNode *nodePtr = root;

	while (nodePtr) {

		if (nodePtr->val == item) {
			cout << nodePtr->val << endl;
			return true;
		}
		else if (item < nodePtr->val)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}

	return false;
}

// Remove calls deleteNode to delete the node
// whose value member is the same as num.

template <class T>
void BinaryTree<T>::remove(T item) {

	deleteNode(item, root);
}

//deleteNode deletes the node whose value member 
// is the same as num.

template <class T>
void BinaryTree<T>::deleteNode(T item, TreeNode *&nodePtr){
	{
		if (item < nodePtr->val)
			deleteNode(item, nodePtr->left);
		else if (item > nodePtr->val)
			deleteNode(item, nodePtr->right);
		else
			makeDeletion(nodePtr);
	}
}

// MakeDeletion takes a reference to a pointer to the node
// that is to be deleted.  The node is removed and the
// brancehs of the tree below the node are reattatched.

template <class T>
void BinaryTree<T>::makeDeletion(TreeNode *&nodePtr) {

	// Define a temp pointer to use in reattaching the left subtree

	TreeNode *tempNodePtr = nullptr;

	if (nodePtr == nullptr)
		cout << "Sorry I can't delete an empty node.\n";
	else if (nodePtr->right == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;					// Reattach the left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;					// Reattach the right child
		delete tempNodePtr;
	}

	// If the node has two children.

	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;

		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;

		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;

		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}

}

// The displayInOrder member function displays the values
// in the subtree pointed to by nodePtr, via inorder traversal

template <class T>
void BinaryTree<T>::displayInOrder(TreeNode *nodePtr) const {

	if (nodePtr) {
		displayInOrder(nodePtr->left);
		cout << nodePtr->val << endl;
		displayInOrder(nodePtr->right);
	}
}

// The displayPreOrder Member function displays the values
// in the subtree pointed by nodePtr, via preorder traversal.

template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode *nodePtr) const {

	if (nodePtr) {
		cout << nodePtr->val << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr-> right);
	}
}

// The display PostOrder member function displays the values
// in the sub tree pointed to by node pointer, via post order traversal

template <class T>
void BinaryTree<T>::displayPostOrder(TreeNode *nodePtr) const {
	
	if (nodePtr) {

		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->val << endl;

	}
}

// countNodes member function will count the total number 
// of nodes in the tree

template <class T>
int BinaryTree<T>::countNodes(TreeNode *nodePtr) {

	if (!nodePtr)
		return 0;

	else {

		return countNodes(nodePtr->left) + countNodes(nodePtr->right) + 1;
	}
}

// Count LeftNodes member function will count the number of
// leaf nodes in the tree

template <class T>
int BinaryTree<T>::countLeafNodes(TreeNode *nodePtr) {



	if (!nodePtr)
		return 0;

	else {
		
		return 1 + countLeafNodes(nodePtr->left) + countLeafNodes(nodePtr->right);
	}

	
}

// Count Tree Height Function counts the how many leves there are in the tree.

template <class T>
int BinaryTree<T>::countTreeHeight(TreeNode *nodePtr) {

	if (!nodePtr)
		return 0;

	else {

		treeHeight = maximum(countTreeHeight(nodePtr->left) , countTreeHeight(nodePtr->right)) + 1;
		return treeHeight;

	}
}

// Maximum function used for the CountTreeHeight method

template <class T>
int BinaryTree<T>::maximum(T a, T b) {


	if (a > b)
		return a;

	else
		return b;


}

#endif

