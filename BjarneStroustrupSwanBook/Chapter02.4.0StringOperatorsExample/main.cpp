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
	string name = first + " " + second; // Concatenate strings

	cout << "Hello, " + name << "\n";

	keep_window_open();
	return 0;
}