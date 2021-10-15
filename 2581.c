#include <iostream>

using namespace std;

bool prime(int n) {
	bool a = true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			a = false;
			break;
		}
	}

	return a;
}

int main() {
	int N, M;
	cin >> N >> M;
	int* arr = new int[M - N + 1];
	bool exist = false;
	if (N == 1) {
		N += 1;
	}

	for (int i = 0; i <= M - N; i++) {
		if (prime(N + i) == true) {
			arr[i] = N + i;
			exist = true;
		}
		else {
			arr[i] = 0;
		}
	}

	int sum = 0;
	if (exist == false) {
		cout << -1;
	}
	else {
		for (int i = 0; i <= M - N; i++) {
			sum += arr[i];
		}
		printf("%d\n", sum);

		for (int i = 0; i <= M - N; i++) {
			if (arr[i] != 0) {
				printf("%d\n", arr[i]);
				break;
			}
		}
	}
}
