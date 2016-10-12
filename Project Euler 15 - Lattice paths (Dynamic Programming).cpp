#include <iostream>
using namespace std;
#define MOD 1000000000+7

long long int mod(long long int val) {
	return val %= MOD;
}

long long int routeSum(int r, int c) {
	long long int arr[r+1][c+1];

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			arr[i][j] = 1;
		}
	}

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	return mod(arr[r][c]);
}

int main() {
	int cases, r, c;
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> r >> c;

		cout << routeSum(r, c) << endl;
	}

	return 0;
}