#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { cin.ignore(); cin.get(); }

// read and write a first name
int main()
{
	cout << "Please enter your first name and age:\n";
	string first_name = "???";		// string variable 
									// ("???" means "Don't know the name")
	double age = -1;				// interger variable
	cin >> first_name >> age;		// read a string followed by an interger
	cout << "Hello, " << first_name << "(age " << age * 12 << " Months)\n";
	keep_window_open();
	return 0;
}