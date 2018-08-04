#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#define MAX 26

using namespace std;

int main() {
	string str;
	int count[MAX] = { 0 };
	int count_max = 0;
	int max_index = 0;
	int current_index;
	bool checknum = false;

	cin >> str;

	// str 값을 소문자로 변환. gcc compiler 에서는 ::toupper로 글로벌 네임스페이스를 사용하거나 (int(*)(int))std::toupper 로 cast를 해줘야 한다.
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))std::toupper);

	for (int i = 0; i < str.length(); i++) {
		current_index = str[i] - 65;
		count[current_index]++;

		// 만약 현재까지 제일 많이 출력이 되었다면
		if (count_max < count[current_index]) {
			count_max = count[current_index];
		}
	}

	// 가장 많이 사용된 알파벳이 2개 이상인지 체크
	for (int i = 0; i < MAX; i++) {
		if (count[i] == count_max) {
			if (checknum == false) {
				checknum = true;
				max_index = i;
			}
			else {
				// 가장 많이 사용된 알파벳이 여러개 존재하므로 ? 출력
				checknum = false;
				break;
			}
		}
	}

	if (checknum == true) {
		cout << char(max_index+65);
	}
	else {
		cout << "?";
	}

	getchar();
	getchar();

	return 0;
}