#include <iostream>
#include <vector>
#include <queue>

#define MAX 50
#pragma warning(disable: 4996)

using namespace std;

typedef struct TREE {
	int parent;
	vector<int> child;
} TREE;

TREE tree[MAX];
queue<int> q;
int n;
int del;
int value;
int root;
int cnt;

int main() {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &value);

		if (value == -1) {
			root = i;
		}
		else {
			tree[i].parent = value;
			tree[value].child.push_back(i);
		}
	}

	scanf("%d", &del);

	if (del == root) {
		printf("0");
		return 0;
	}

	// 삭제하고자 하는 노드의 자식 노드리스트를 지운다.
	tree[del].child.clear();

	// del 노드의 부모노드의 자식 노드 리스트에서 del 노드를 지워준다.
	int parentOfDel = tree[del].parent;

	for (int i = 0; i < tree[parentOfDel].child.size(); i++) {
		if (tree[parentOfDel].child[i] == del) {
			tree[parentOfDel].child.erase(tree[parentOfDel].child.begin() + i);
		}
	}

	// root에서부터 탐색을 차례대로 하여서, 리프 노드를 구한다.
	q.push(root);

	while (!q.empty()) {
		int front = q.front();
		q.pop();

		// 리프 노드이면
		if (tree[front].child.empty()) {
			cnt++;
		}

		// 리프 노드가 아니면 계속 자식 노드를 탐색하기 위해 큐에 넣어준다.
		for (int i = 0; i < tree[front].child.size(); i++) {
			q.push(tree[front].child[i]);
		}
	}

	printf("%d", cnt);

	return 0;
}