#include <iostream>
using namespace std;

void sieve(long long int a[], int size) {

	a[0] = 0;
	a[1] = 0;

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

}

int main() {
	int cases, num;
	cin >> cases;
    
    int max = 2000000;
    long long int arr[max + 1];

    sieve(arr, max);

	for (int i = 0; i < cases; i++) {
        long long int sum = 0;
		cin >> num;

		for (int j = 2; j <= num; j++) {
			if (arr[j]) {
                sum += j;
            }
		}

		cout << sum << endl;
	}

	return 0;
}