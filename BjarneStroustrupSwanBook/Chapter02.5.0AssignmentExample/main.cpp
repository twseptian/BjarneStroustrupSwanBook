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
	string previous = " ";		// previous word; initialized to "not a word"
	string current;				// current word

	while (cin >> current)		// read a stream of words
	{
		if (previous == current)	// check word is the same as last
			cout << "repeated word: " << current << "\n";
		previous = current;
	}

	keep_window_open();
	return 0;
}