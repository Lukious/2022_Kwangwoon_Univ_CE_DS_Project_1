#pragma once

#include "TreeNode.h"
#include <iostream>

class BinarySearchTree
{
	friend class TreeManager;
private:
	TreeNode * m_root;

public:
	BinarySearchTree() { m_root = NULL; }
	~BinarySearchTree();

	void insert(  ); //Data
	void deletion(  ); //unique number = key

	friend std::ostream& operator<<(std::ostream& os, const BinarySearchTree& tree) {

	// fill in your code to print a node in binary search tree
		return os;
	}
};
