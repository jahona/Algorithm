#include <iostream>
#include <string>
#include <string.h>
#define MAX 26

using namespace std;

int n;
string str;
bool check[MAX];
bool flag;
int cnt;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		flag = true;
		memset((void *)check, 0, sizeof(check));

		for (int index = 0; index < str.length(); index++) {
			if (check[str[index] - 97]) {
				flag = false;
				break;
			}

			// str[index] ���ڰ� �̾������� Ȯ��
			while (str[index] == str[index+1]) {
				index++;
			}

			// �� �̻� �̾����� �ʴ´ٸ� group�̶�� �Ǵ� �� check
			check[str[index] - 97] = true;
		}

		if (flag) {
			cnt++;
		}
	}
	
	cout << cnt;

	getchar();
	getchar();

	return 0;
}