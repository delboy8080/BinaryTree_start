#pragma once

template <class T>
class BSTNode
{
	
	BSTNode<T> *parent;
	BSTNode<T> *left;
	BSTNode<T> *right;
	T data;

public:
	BSTNode();
	BSTNode(T data);
	void setItem(T item);
	int count();
	void add(T item);
	BSTNode<T>* getParent();
	BSTNode<T>* getLeft();
	BSTNode<T>* getRight();
	void setLeft(BSTNode<T> *l);
	void setRight(BSTNode<T> *r);
	T getItem();
	~BSTNode();

};
template <class T>
BSTNode<T>::~BSTNode()
{

}
template <class T>
T BSTNode<T>::getItem()
{
	return this->data;
}
template <class T>
BSTNode<T>* BSTNode<T>::getLeft()
{
	return this->left;
}
template <class T>
BSTNode<T>* BSTNode<T>::getRight()
{
	return this->right;
}
template <class T>
BSTNode<T>* BSTNode<T>::getParent()
{
	return this->parent;
}
template <class T>
void BSTNode<T>::setLeft(BSTNode<T> *l)
{
	this->left = l;
}
template <class T>
void BSTNode<T>::setRight(BSTNode<T> *r)
{
	this->right = r;
}

template <class T>
void BSTNode<T>::setItem(T item)
{
	this->data = item;
}


template <class T>
BSTNode<T>::BSTNode()
{
	left = right = parent = nullptr;
}


template <class T>
BSTNode<T>::BSTNode(T data)
{
	this->data = data;
	left = right = parent = nullptr;
}
template <class T>
int BSTNode<T>::count()
{
	int c = 1;
	if (this->left != nullptr)
		c += this->left->count();
	if (this->right != nullptr)
		c += this->right->count();
	return c;
}

template <class T>
void BSTNode<T>::add(T item)
{
	if (this->data == item)
		return;
	if (item < this->data)
	{
		if (this->left == nullptr)
		{
			this->left = new BSTNode<T>(item);
			this->left->parent = this;
		}
		else
		{
			this->left->add(item);
		}
	}
	else
	{
		if (this->right == nullptr)
		{
			this->right = new BSTNode<T>(item);
			this->right->parent = this;
		}
		else
		{
			this->right->add(item);
		}
	}
}


