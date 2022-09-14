#include <iostream>
#include "TreeManager.h"

using namespace std;

int main(int argc, char** argv)
{
	TreeManager TreeManager(argv[1], atoi(argv[2]));
	cout << TreeManager << endl;

	cout << "The Program window close" << endl;
	cout << TreeManager << endl;
	
    return 0;
}

