#include <iostream>
using namespace std;

int main() {
    int NumCases; 
    cin >> NumCases;
    
    for (int i = 0; i < NumCases; i++){
        long long n, p;
        cin >> n;
        
        for (p = 2; p*p <= n; p++){
           while (n % p == 0)
               n /= p;
        }
           
        if (n > 2)
            cout << n << endl;
        else
            cout << p - 1 << endl;
    }
    
    return 0;
}