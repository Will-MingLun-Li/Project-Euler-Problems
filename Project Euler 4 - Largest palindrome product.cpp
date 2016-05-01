#include <iostream>
using namespace std;

bool CheckPalindrome(int num){
    int reverse = 0, tempnum = num;
    
    while (tempnum){
        reverse *= 10;
        reverse += (tempnum%10);
        tempnum /= 10;
    }
    
    if (num == reverse)
        return true;
    else
        return false;
}

int main() {
    int NumCases;
    cin >> NumCases;
    
    for (int x = 0; x < NumCases; x++){
        int n, ans = 0;
        cin >> n;
        
        for(int i = 100; i < 1000; i++){
            for(int j = 100; j < 1000; j++){
                if(i*j < n && CheckPalindrome(i*j))
                    ans = max(ans, i*j);
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}