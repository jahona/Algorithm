#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	string str;
	string tmp;

	set<string> s;

	cin >> str;

	int len = str.length();

	for (int i = 0; i < len; i++) {
		tmp = str.substr(i, len);

		s.insert(tmp);
	}

	// set<string> iterator ¸¦ »ý¼º
	for (set<string>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << endl;
	}

	getchar();
	getchar();

	return 0;
}