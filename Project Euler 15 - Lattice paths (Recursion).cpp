#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int recursive (int r, int c){
    int path = 0;
    
    if (r == 0 && c == 0)
        return 1;
    if (r > 0)
        path += recursive(r-1, c);
    if (c > 0)
        path += recursive(r, c-1);
    
    
    return path;
}

int main() {
    int cases, r, c;
    cin >> cases;
    
    for (int i = 0; i < cases; i++){
        cin >> r >> c;
        
        cout << recursive(r, c) << endl;
    }
    return 0;
}