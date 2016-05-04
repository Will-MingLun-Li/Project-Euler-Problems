#include <iostream>
using namespace std;

int FindPy(int n){
    for (long a = 1; a < n/2; a++){
        for(long b = 2; b < a; b++){
            long c = n - a - b;
                
            if (a*a + b*b == c*c)
                return a*b*c;
        }
    }
    
    return -1;
}

int main() {
    int NumCases;
    cin >> NumCases;
    
    for (int i = 0; i < NumCases; i++){
        int n;
        cin >> n;
        
        cout << FindPy(n) << endl;
    }
    
    return 0;
}