#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int main() {
	string str;
	set<string> s;
	vector<string> v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		// str�� ���� ���� ������ ��ȯ�Ͽ� �ߺ��� �ȴٸ�
		if (s.count(str)) {
			v.push_back(str);
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	
	getchar();
	getchar();

	return 0;
}