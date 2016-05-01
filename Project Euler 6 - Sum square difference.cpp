#include <iostream>
using namespace std;

int main() {
    int NumCases;
    cin >> NumCases;
    
    for(int i = 0; i < NumCases; i++){
        long long n, SquareOfSum, SumOfSquare;
        cin >> n;
        
        SquareOfSum = n*n*(n+1)*(n+1)/4; //Arithemic Series Squared
        SumOfSquare = n*(n+1)*(2*n+1)/6; //Sum of Squares Formula
        
        cout << SquareOfSum - SumOfSquare << endl;
    }
    
    return 0;
}