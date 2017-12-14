#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { system("pause"); }

// read and write a first name
int main()
{
	cout << "Please enter your first and second names\n";
	string first;
	string second;

	cin >> first >> second; // Read in two strings
	if (first == second)
	{
		cout << "That is the same name twice\n";
	}

	if (first < second)
	{
		cout << first << " is alphabetically before" << second << "\n";
	}

	if (first > second)
	{
		cout << first << " is alphabetically after" << second << "\n";
	}

	keep_window_open();
	return 0;
}