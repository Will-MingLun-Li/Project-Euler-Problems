#include <iostream>
#include <string>
using namespace std;

int main() {
    int NumCases, n, k;
    string s;
    cin >> NumCases;
    
    for (int i = 0; i < NumCases; i++){
        int max = 0;
        cin >> n >> k;
        cin >> s;
        
        for (int j = 0; j < n-k; j++){
            int ans = 1;
            for (int l = 0; l < k; l++){
                ans *= s[j+l]-'0';
            }
            if (ans > max)
                max = ans;
        }
        
        cout << max << endl;
    }
    
    return 0;
}