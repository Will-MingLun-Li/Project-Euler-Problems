#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        long x, three, five, fifteen;
        cin >> x;
        
        three = (x-1)/3;
        five = (x-1)/5;
        fifteen = (x-1)/15;
        
        //Arithmetic Series
        cout << 3*(three*(three + 1) / 2) + 5*(five*(five + 1) / 2) - 15*(fifteen*(fifteen + 1) / 2) << endl;
    }
    
    return 0;
}