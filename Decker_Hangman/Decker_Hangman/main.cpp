#include "List.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fin;

	try
	{
		fin.open("dictionary.txt");
		if (!fin)
		{
			throw 404;
		}
	}

	catch (int i)
	{
		cout << "ERROR FOUND!\nError " << i << "!\nDefinition: FILE NOT FOUND\n\n";
		return 0;
	}

	//Node * arr[8];

	int max;
	string word;

	fin >> string;
	max = string.size();

	while (!fin.eof)
	{
		fin >> string;

		if (string.size() > max)
		{
			max = string.size();
		}
	}

	cout << endl << endl << "Max size: \n\n";

	return 0;
}