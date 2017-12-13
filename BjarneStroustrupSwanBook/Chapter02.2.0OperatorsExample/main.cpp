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
	cout << "Please enter a Floating point value:\n";
	double n;

	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthee times n == " << n * 3
		<< "\ntwice n == " << n + n
		<< "\nn Squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< endl;
	keep_window_open();
	return 0;
}