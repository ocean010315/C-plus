#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<string> n1(N), n2(M);
	vector<string> same;

	for (int i = 0; i < N; i++) {
		cin >> n1[i];
	}
	sort(n1.begin(), n1.end());

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> n2[i];
		if (binary_search(n1.begin(), n1.end(), n2[i])) {
			same.push_back(n2[i]);
			cnt++;
		}
	}
	sort(same.begin(), same.end());

	cout << cnt << endl;

	for (int i = 0; i < cnt; i++) {
		cout << same[i] << endl;
	}
}
