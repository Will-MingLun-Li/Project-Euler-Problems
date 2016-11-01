#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        int sumArr[16][16] = { 0 };
        int triangle[16][16] = { 0 };
        int h, sum = 0;

        cin >> h;

        for (int j = 0; j < h; j++) {
            for (int k = 0; k <= j; k++) {
                cin >> triangle[j][k];
            }
        }

        sumArr[0][0] = triangle[0][0];
        for (int j = 1; j < h; j++) {
            for (int k = 0; k <= j; k++) {
                if (k == 0) {
                    sumArr[j][k] = triangle[j][k] + sumArr[j-1][k];
                }
                else {
                    sumArr[j][k] = max(triangle[j][k] + sumArr[j-1][k], triangle[j][k] + sumArr[j-1][k-1]);
                }
            }
        }

        for (int j = 0; j < h; j++) {
            sum = max(sum, sumArr[h-1][j]);
        }

        cout << sum << endl;
    }

    return 0;
}