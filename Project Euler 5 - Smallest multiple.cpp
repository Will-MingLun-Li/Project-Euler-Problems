#include <iostream>
using namespace std;

int gcd (int a, int b){
    if (b == 0)
        return a;
    else
        return gcd (b, a%b);
}

int lcm (int x){
    if (x == 1)
        return 1;
    else
        return lcm(x-1)*x / gcd(lcm(x-1),x);
}

int main() {
    int NumCases;
    cin >> NumCases;
    
    for (int i = 0; i < NumCases; i++){
        int x;
        cin >> x;
        
        cout << lcm(x) << endl;
    }
    
    return 0;
}