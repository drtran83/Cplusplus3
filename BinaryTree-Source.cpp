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

#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

	cout << "CISS 243 - Binary Tree Part 1 - Tom Tran" << endl;
	cout << "-----------------------------------------------\n" << endl;

	// Binary Tree object of ints

	BinaryTree<int> treeObj;

	// Insert nodes into the tree

	cout << "Inserting nodes into the tree....\n";

	treeObj.insertNode(1);
	treeObj.insertNode(10);
	treeObj.insertNode(50);
	treeObj.insertNode(90);
	treeObj.insertNode(35);
	treeObj.insertNode(100);
	treeObj.insertNode(20);
	treeObj.insertNode(75);

	// Display the nodes in Pre-Order

	cout << "\nDisplaying the nodes in Pre-Order:\n";
	treeObj.displayPreOrder();

	// Searching for specific node and remove it.

	cout << "\nSearching for 10 in the binary tree....";

	if (treeObj.searchNode(10))
		cout << "\nWe have located 10 in the tree." << endl;
	else
		cout << "\nSorry we could not find 10 in the tree." << endl;

	cout << "\nNow Removing 10 from the binary tree." << endl;

	treeObj.remove(10);

	// Display whats left in Order

	cout << "\nDisplaying the Binary Tree In Order" << endl;
	treeObj.displayInOrder();

	cout << "\nDisplaying the Binary Tree in Post Order" << endl;
	treeObj.displayPostOrder();

	cout << "\nSearching for 10 again....\n";

	if (treeObj.searchNode(10))
		cout << "\nWe have located 10 in the tree." << endl;
	else
		cout << "\nSorry we could not find 10 in the tree." << endl;

	cout << "\nThere are " << treeObj.countNodes() << " nodes in the tree." << endl;
	cout << "There are " << treeObj.countLeafNodes() << " leaf nodes in the tree" << endl;
	cout << "There are " << treeObj.countTreeHeight() << " levels in this tree.\n" << endl;




	return 0;


}