#include <iostream>
using namespace std;

int num_divisors(int n){
    if (n % 2 == 0)
        n /= 2;
        
   int divisor = 1, count = 0;
    
    while (n % 2 == 0){
        count++;
        n /= 2;
    }
    
    divisor = divisor * (count + 1);
    int p = 3;
    
    while (n != 1){
        count = 0;
        while (n % p == 0){
            count++;
            n /= p;
        }
        divisor = divisor * (count + 1);
        p += 2;
    }
    
    return divisor;
}

int main() {
    int cases, num;
    cin >> cases;
    
    for (int i = 0; i < cases; i++){
        cin >> num;
        
        int n = 1;
        int lnum = num_divisors(n), rnum = num_divisors(n+1);
        
        while (lnum * rnum <= num) {
            n++;
            lnum = rnum; 
            rnum = num_divisors(n+1);
        }
        
        cout << (n*(n+1))/2 << endl;
    }
    return 0;
}
