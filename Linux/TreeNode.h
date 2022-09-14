#pragma once

#include "ImageNode.h"
#include <iostream>

class TreeNode
{
	friend class BinarySearchTree;
	friend class TreeManager;
private:
	ImageNode ; //parameter must be added
	TreeNode* m_left;
	TreeNode* m_right;
public:
	TreeNode() :m_left(NULL), m_right(NULL) {}
	~TreeNode() { }
	TreeNode(ImageNode & data, TreeNode* left = NULL, TreeNode* right = NULL)
	{
		this->m_data = data;
		this->m_left = left;
		this->m_right = right;
	}
	
	TreeNode* getLeftNode() const { return m_left; }
	TreeNode* getRightNode() const { return m_right; }

	friend std::ostream& operator<<(std::ostream& os, const TreeNode* node)
	{
		if(node != NULL)
			os << node->m_data;
		return os;
	}
};
