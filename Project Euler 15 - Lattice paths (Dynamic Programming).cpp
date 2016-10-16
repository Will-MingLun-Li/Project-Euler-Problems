#include <iostream>
using namespace std;
#define MOD 1000000007;

void routeSum(long long int arr[][501]) {
    for(int i = 1; i <= 500; i++) 
        arr[0][i] = arr[i][0] = 1;

	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++) {
			arr[i][j] = (arr[i-1][j] + arr[i][j-1]) % MOD;
		}
	}
}

int main() {
    long long int arr[501][501] = {0}; //Because 500 is the cap
	routeSum(arr);	

	int cases, r, c;
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> r >> c;

		cout << arr[r][c] << endl;
	}

	return 0;
}