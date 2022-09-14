#pragma once

#include <string>
#include <iostream>
class ImageNode
{
	friend class TreeNode;
	friend class BinarySearchTree;
	friend class TreeManager;
private:
	std::string m_name;
	std::string dirname;

	int unique_number;

public:
	ImageNode() { }
	ImageNode(std::string name, std::string dir, int number)
		:
		m_name(name),
		dirname(dir),
		unique_number(number),
	{
	}

	friend std::ostream& operator<<(std::ostream& os, const ImageNode& node) {
		os << "(node.m_name: " << node.m_name << "), "; //Debug with print
		return os;
	}
};
