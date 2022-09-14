#include "TreeManager.h"
#include <fstream>
#include <string>

TreeManager::ImageControl::ImageControl()
{
	//Funtion must be added (Skeleton codes function is not define every features in this project)
}

TreeManager::ImageControl::ImageControl( ) // parameter must be added
{
	this->node_f = node_f;
}

std::ostream& operator<<(std::ostream& os, const TreeManager::ImageControl& ) //parameter must be added
{

	return os;
}


TreeManager::TreeManager(std::string file_dir, int unique_number)
{
	m_unique_number = unique_number;

	std::ifstream in(file_dir);
	std::string line;

	while (std::getline(in, line))
	{

	}
}

std::ostream& operator<<(std::ostream& os, const TreeManager& manager)
{


	return os;
}

TreeManager::ImageControl TreeManager::node_edit()
{
	ImageControl deletion;

	imageBST.deletion();

	return deletion;
}
