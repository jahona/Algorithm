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

			// str[index] 문자가 이어지는지 확인
			while (str[index] == str[index+1]) {
				index++;
			}

			// 더 이상 이어지지 않는다면 group이라고 판단 후 check
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