#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

// read and write a first name
int main()
{
	cout << "Please enter your first name and age:\n";
	string first_name;	// string variable 
	int age;			// interger variable
	cin >> first_name;	// read characters into first_name
	cin >> age;			// read an interger
	cout << "Hello, " << first_name << "(age " << age << ")\n";
	keep_window_open();
	return 0;
}