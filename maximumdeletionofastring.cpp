// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;

// Function to return the maximum number
// of given operations required to
// remove the given string entirely
int find(string s)
{

	// If length of the string is zero
	if (s.length() == 0)
		return 0;

	// Single operation can delete the entire string
	int c = 1;

	// To store the prefix of the string
	// which is to be deleted
	string d = "";

	for (int i = 0; i < s.length(); i++) {

		// Prefix s[0..i]
		d += s[i];

		// To store the substring s[i+1...2*i+1]
		string s2 = s.substr(i + 1, d.length());

		// If the prefix s[0...i] can be deleted
		if (s2 == d) {

			// 1 operation to remove the current prefix
			// and then recursively find the count of
			// operations for the substring s[i+1...n-1]
			c = 1 + find(s.substr(i + 1));
			break;
		}
	}

	// Entire string has to be deleted
	return c;
}

// Driver code
int main()
{
	string s = "aaaaa";

	cout << find(s);

	return 0;
}
