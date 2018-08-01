#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	int sum = 0;
	vector<int> v;
	v.reserve(50000);

	cin >> n;

	while (n!=-1) {
		sum = 0;

		for (int i = 1; i <= n/2; i++) {
			if (n%i == 0) {
				sum += i;
				v.push_back(i);
			}
		}
		
		if (sum == n) {
			cout << n << " = ";

			for (vector<int>::size_type i = 0; i < v.size() - 1; i++) {
				cout << v[i] << " + ";
			}

			cout << v[v.size()-1] << endl;
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}

		v.clear();
		cin >> n;
	}

	return 0;
}