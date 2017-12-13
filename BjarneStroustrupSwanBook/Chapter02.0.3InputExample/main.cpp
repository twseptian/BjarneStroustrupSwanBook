#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { cin.ignore(); cin.get(); }

// read and write a first and secound name
int main()
{
	cout << "Please enter your first name and second:\n";
	string first;
	string second;
	cin >> first >> second;	// read two strings
	cout << "Hello, " << first << " " << second << "\n";
	
	keep_window_open();
	return 0;
}