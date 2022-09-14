#pragma once

#include "BinarySearchTree.h"

#include <iostream>
#include <string>

class TreeManager
{
private:
	int unique_number;

	BinarySearchTree imageBST;

public:

	struct ImageControl
	{
		ImageNode node_f;

		ImageControl();
		ImageControl(TreeManager node_f);
	};

	TreeManager(std::string file_dir);
	
	friend std::ostream& operator<<(std::ostream& os, const TreeManager& manager);

	ImageControl deletion();
};

