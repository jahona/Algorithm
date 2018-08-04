#include <iostream>
#include <string>
#include <cstring>		// use memset in gcc compiler

#define MAX 26

using namespace std;

int main() {
	string str;
	int check[MAX];

	// use memset, init -1
	memset((void*)check, -1, sizeof(int) * MAX);
	
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (check[str[i] - 97] == -1) {
			check[str[i] - 97] = i;
		}
	}

	for (int i = 0; i < MAX - 1; i++) {
		cout << check[i] << " ";
	}
	cout << check[MAX - 1];

	getchar();
	getchar();

	return 0;
}