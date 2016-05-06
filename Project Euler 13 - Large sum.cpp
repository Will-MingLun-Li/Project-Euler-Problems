#include <iostream>
#include <string>
using namespace std;

int main() {
    int NumLines, ans[55] = {0}, temp[55], a = 0;
    string line;
    
    cin >> NumLines;
    
    for (int i = 0; i < NumLines; i++){
        cin >> line;
        
        for (int j = 50; j > 0; j--){
            temp[j+4] = line[j-1]-'0';
            ans[j+4] += temp[j+4];
            
            for (int k = 2; k < 7; k++){
                if (ans[j+k] >= 10){
                    ans[j+k] -= 10;
                    ans[j+k-1] += 1;
                }
            }
        }
    }
    
    for (int x = 0; x < 5; x++)
        if (ans[x] == 0)
            a++;
    
    for (int i = a; i < 10 + a; i++)
        cout << ans[i];
    cout << endl;
    
    return 0;
}