// 20 Change every letter with the next lexicographic alphabet in the given string

#include <bits/stdc++.h>
using namespace std;

const string CHARS = "abcdefghijklmnopqrstuvwxyz";
const int MAX = 26;

// Function to return the modified string
string getString(string str, int n)
{

	// Map to store the next character
	// on the keyboard for every
	// possible lowercase character
	unordered_map<char, char> uMap;
	for (int i = 0; i < MAX; i++) {
		uMap[CHARS[i]] = CHARS[(i + 1) % MAX];
	}

	// Update the string
	for (int i = 0; i < n; i++) {
		str[i] = uMap[str[i]];
	}
// 	for (auto x : uMap)
//       cout << x.first << " " << x.second << endl;

	return str;
}

// Driver code
int main()
{
	string str = "geeks";
	int n = str.length();

	cout << getString(str, n);

	return 0;
}
