#include <iostream>
#include <string>
#include <algorithm>	// reverse

using namespace std;

string convert(string str) {
	// stringÀ» reverse ÇÑ´Ù.
	reverse(str.begin(), str.end());

	return str;
}

int compare(string str1, string str2) {
	if (str1 > str2) return 1;
	else if (str1 == str2) return 0;
	else return -1;
}

int main() {
	string str1, str2;

	cin >> str1 >> str2;

	string reverse_str1 = convert(str1);
	string reverse_str2 = convert(str2);

	string result = compare(reverse_str1, reverse_str2) > 0 ? reverse_str1 : reverse_str2;

	cout << result;

	getchar();
	getchar();

	return 0;
}