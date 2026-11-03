// BinaryTree.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "BinaryTree.h"
#include "Utils.h"
using namespace std;



int main()
{
	BinaryTree<int> tree;
	tree.add(4);
	tree.add(2);
	tree.add(6);
	tree.add(1);
	tree.add(3);
	tree.add(5);
	tree.add(7);
	cout << tree.count() << endl;
	printBT(tree.root);

	

    return 0;
}

