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

	// �����ϰ��� �ϴ� ����� �ڽ� ��帮��Ʈ�� �����.
	tree[del].child.clear();

	// del ����� �θ����� �ڽ� ��� ����Ʈ���� del ��带 �����ش�.
	int parentOfDel = tree[del].parent;

	for (int i = 0; i < tree[parentOfDel].child.size(); i++) {
		if (tree[parentOfDel].child[i] == del) {
			tree[parentOfDel].child.erase(tree[parentOfDel].child.begin() + i);
		}
	}

	// root�������� Ž���� ���ʴ�� �Ͽ���, ���� ��带 ���Ѵ�.
	q.push(root);

	while (!q.empty()) {
		int front = q.front();
		q.pop();

		// ���� ����̸�
		if (tree[front].child.empty()) {
			cnt++;
		}

		// ���� ��尡 �ƴϸ� ��� �ڽ� ��带 Ž���ϱ� ���� ť�� �־��ش�.
		for (int i = 0; i < tree[front].child.size(); i++) {
			q.push(tree[front].child[i]);
		}
	}

	printf("%d", cnt);

	return 0;
}