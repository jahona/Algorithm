#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		// �빮���� ������ 65~(+26)�����̴�.
		// A B C �� ���� ������ ����� ������ ����ó�� �ʿ�

		// -1 % 26 == -1�̴�. ���� ������ ��츦 ����ó���ϱ� ���� 26�� ������� �Ѵ�.
		cout << char((str[i] - 65 - 3 + 26) % 26 + 65);
	}

	getchar();
	getchar();

	return 0;
}