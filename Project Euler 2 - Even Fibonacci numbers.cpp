#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        long long x, f0 = 2, f1 = 8, f2, sum = 0;
        cin >> x;
        
        while (f1 <= x){
            sum += f1;
            
            f2 = 4*f1 + f0;
            f0 = f1;
            f1 = f2;
        }
        
        cout << sum + 2 << endl;
    }
    
    return 0;
}
