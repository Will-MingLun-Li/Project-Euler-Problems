#include <iostream>
using namespace std;

void sieve(long long int a[], long long int sum[], int size) {

	a[0] = 0;
	a[1] = 0;
	sum[0] = 0;
	sum[1] = 0;

	for (int i = 2; i <= size; i++) {
		a[i] = 1;
	}

	for (int i = 2; i*i <= size; i++) {
		if (a[i]) {
			for (int j = 2 * i; j <= size; j += i) {
				a[j] = 0;
			}
		}
	}

	for (int i = 2; i <= size; i++) {
		if (a[i])
			sum[i] = sum[i-1] + i;
		else 
			sum[i] = sum[i-1];
	}

}

int main() {
	int cases, num;
	cin >> cases;
    
    int max = 1000000;
    long long int arr[max + 1];
    long long int sum[max + 1];

    sieve(arr, sum, max);

	for (int i = 0; i < cases; i++) {
		cin >> num;

		cout << sum[num] << endl;
	}

	return 0;
}