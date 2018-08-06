#include <iostream>
#include <string>

#define MAX 1000000
#define SAFE "FRULA"

using namespace std;

string str;
string boom;

char result[MAX+1];

int main() {
	cin >> str >> boom;

	int len1 = str.length();
	int index = 0;

	for (int i = 0; i < len1; i++) {
		result[index++] = str[i];
		int j = boom.length();
		if (str[i] == boom[--j]) {
			bool check = false;
			int size = index - boom.length();

			for (int k = index - 1; k >= size; k--) {
				if (result[k] == boom[j--])
					check = true;
				else {
					check = false;
					break;
				}
			}

			if (check) index -= boom.length();
		}
	}
	
	if (index == 0)
		cout << SAFE << endl;
	else {
		for (int i = 0; i < index; i++) {
			cout << result[i];
		}
	}

	getchar();
	getchar();

	return 0;
}