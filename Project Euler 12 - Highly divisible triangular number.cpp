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
    int cases, num = 1, n = 1;
    cin >> cases;
    
    int arr[1001];
    
    while (num <= 1000){
        int lnum = num_divisors(n), rnum = num_divisors(n+1);
        
        while (lnum * rnum <= num) {
            n++;
            lnum = rnum; 
            rnum = num_divisors(n+1);
        }
        
        arr[num] = (n*(n+1))/2;
        num++;
    }
    
    int val;
    for (int i = 0; i < cases; i++){
        cin >> val;
          
        cout << arr[val] << endl;
    }
    return 0;
}