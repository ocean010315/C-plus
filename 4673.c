#include <iostream>

using namespace std;

int check(int n) {
	int sum = n;

	while (n / 10 != 0) {
		sum += n % 10;
		n = (n - (n % 10)) / 10;
	}

	return sum + n;
}

int main() {
	bool arr[10'000] = { false, };

	for (int i = 0; i < 10'000; i++) {
		for (int j = 1; j < i + 1; j++) {
			if (i + 1 == check(j)) {
				arr[i] = true;
				break;
			}
		}

		if (arr[i] == false) {
			cout << i + 1 << endl;
		}
	}
}
