#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int arr[20][20], ans = 0;
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            int hor = 1, ver = 1, diag1 = 1, diag2 = 1;
            
            for (int k = 0; k < 4; k++){
                if (i <= 16)
                    hor *= arr[i+k][j];
                if (j <= 16)
                    ver *= arr[i][j+k];
                if (i <= 16 && j <= 16)
                    diag1 *= arr[i+k][j+k];
                if (i <= 16 && j >= 3)
                    diag2 *= arr[i+k][j-k];
            }
            
            ans = max(ans, max(hor, max(ver, max(diag1, diag2))));
        }
    }
    
    cout << ans << endl;
    
    return 0;
}