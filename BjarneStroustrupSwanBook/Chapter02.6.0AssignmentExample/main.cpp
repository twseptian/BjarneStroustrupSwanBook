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
	int number_of_words = 0;
	string previous = " ";		// not a word
	string current;				

	while (cin >> current)		
	{
		++number_of_words;
		if (previous == current)	// Increase word count
			cout << "Word Number " << number_of_words
			<< " repeated word: " << current << "\n";
		previous = current;
	}

	keep_window_open();
	return 0;
}