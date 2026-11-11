// BinaryTree.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "BinaryTree.h"
#include "Utils.h"
using namespace std;

void question1();
void question2();
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
/*	cout << tree.count() << endl;
	printBT(tree.root);
	cout << "Pre: ";
	tree.printPreOrder();
	cout << "Post: ";
	tree.printPostOrder();
	cout << "In-Order: ";
	tree.printInOrder();
	*/
	
	question2();
    return 0;
}

template <class T>
T lowest(BinaryTree<T>& tree)
{
	BSTNode<T>* temp = tree.root;
	while (temp->getLeft() != nullptr)
	{
		temp = temp->getLeft();
	}
	return temp->getItem();
}

template <class T>
T highest(BinaryTree<T>& tree)
{
	BSTNode<T>* temp = tree.root;
	while (temp->getRight() != nullptr)
	{
		temp = temp->getRight();
	}
	return temp->getItem();
}

void question1()
{
	BinaryTree<int> tree;
	for (int i = 1; i <= 15;i++)
	{
		tree.add(1 + rand()%100);
	}
	balance(tree);
	printBT(tree.root);
	cout << "Lowest Value:" << lowest(tree) << endl;
	cout << "Highest Value:" << highest(tree) << endl;

}

struct Book
{
	string author;
	string title;
	double price;
	Book()
	{
		title = author = "";
		price = 0;
	}
	Book(string t, string a,  double p)
	{
		author = a;
		title = t;
		price = p;
	}
	bool operator<(Book& other)
	{
		return this->title < other.title;
	}
	bool operator==(Book& other)
	{
		return this->title == other.title;
	}
	friend ostream& operator<<(ostream& out, Book& b)
	{
		return out << b.title << " by " << b.author << " (" << b.price << ")";
	}
};

void question2()
{
	BinaryTree<Book> tree;
	tree.add(Book("The Associate", "John Grisham",9.99));
	tree.add(Book("The Christmas Pig", "JK Rowling", 21.99));
	tree.add(Book("The Judge's List", "John Grisham", 19.99));
	printBT(tree.root);
}