#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int* arr = new int[N];
	int temp;

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	printf("%d %d", *min_element(arr, arr+N), *max_element(arr, arr + N));
}
