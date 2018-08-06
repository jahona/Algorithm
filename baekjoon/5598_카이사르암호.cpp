#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		// 대문자의 범위는 65~(+26)까지이다.
		// A B C 의 경우는 범위를 벗어나기 때문에 예외처리 필요

		// -1 % 26 == -1이다. 따라서 음수의 경우를 예외처리하기 위해 26을 더해줘야 한다.
		cout << char((str[i] - 65 - 3 + 26) % 26 + 65);
	}

	getchar();
	getchar();

	return 0;
}