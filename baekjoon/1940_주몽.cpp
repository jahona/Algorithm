#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	int * arr;
	int count = 0;

	cin >> N >> M;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int start = 0;
	int end = N-1;

	while (arr[start] <= arr[end] && start != end) {
		if (arr[start] + arr[end] == M) {
			count++;
			start++;
			end--;
		}
		else if (arr[start] + arr[end] < M) {
			start++;
		}
		else {
			end--;
		}
	}

	cout << count;

	getchar();
	getchar();

	return 0;
}