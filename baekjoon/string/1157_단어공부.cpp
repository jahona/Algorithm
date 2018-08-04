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

	// str ���� �ҹ��ڷ� ��ȯ. gcc compiler ������ ::toupper�� �۷ι� ���ӽ����̽��� ����ϰų� (int(*)(int))std::toupper �� cast�� ����� �Ѵ�.
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))std::toupper);

	for (int i = 0; i < str.length(); i++) {
		current_index = str[i] - 65;
		count[current_index]++;

		// ���� ������� ���� ���� ����� �Ǿ��ٸ�
		if (count_max < count[current_index]) {
			count_max = count[current_index];
		}
	}

	// ���� ���� ���� ���ĺ��� 2�� �̻����� üũ
	for (int i = 0; i < MAX; i++) {
		if (count[i] == count_max) {
			if (checknum == false) {
				checknum = true;
				max_index = i;
			}
			else {
				// ���� ���� ���� ���ĺ��� ������ �����ϹǷ� ? ���
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