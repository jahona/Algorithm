#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	int cnt = 0;
	int ans = 100;

	cin >> str1 >> str2;

	for (int i = 0; i <= str2.length() - str1.length(); i++) {
		for (int j = 0; j < str1.length(); j++) {
			if (str1[j] != str2[i + j]) {
				cnt++;
			}
		}
		if (cnt < ans) ans = cnt;
		cnt = 0;
	}

	cout << ans;

	getchar();
	getchar();

	return 0;
}