#include <iostream>
using namespace std;

int main(){
	int cases, n;
	int arr[10001] = {0}, sub[10001] = {0};

	sub[10000] = 1;
	cin >> cases;

	for (int i = 1; i <= 10000; i++){
		int t = 10000, inc = 0;

		while (t >= inc){
			sub[t] = sub[t] * 2 + inc;

			if (sub[t] > 9){
				sub[t] %= 10;
				inc = 1;
			}
			else{
				inc = 0;
			}

			t--;
		}

		for (int j = 10000; j > t; j--){
			arr[i] += sub[j];
		}
	}

	for (int i = 0; i < cases; i++){
		cin >> n;
		cout << arr[n] << endl;
	}

	return 0;
}