#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { std::getchar(); }

// read and write a first name
int main()
{
	double d = 0;

	while (cin>>d)						// Repeat the statements below
	{									// As long as we type in numbers
		int i = d;						// try to squeeze a double into an int
		char c = i;						// try to squeeze a int into a char
		int i2 = c;						// get the interger value of teh character
		cout << "d==" << d				// the orginal Double
			<< " i==" << i				// converted to an int 
			<< " i2==" << i2			// int value of the char
			<< " char(" << c << ")\n";  // The Char
	}

	keep_window_open();
	return 0;
}