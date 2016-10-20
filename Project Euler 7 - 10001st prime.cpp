#include <iostream>
using namespace std;

#define max 1000000

void sieve(int arr[], int size){
    arr[0] = 0;
    arr[1] = 0;
    
    for (int i = 2; i <= size; i++){
        arr[i] = 1;
    }
    
    for (int i = 2; i*i <= size; i++){
        if (arr[i]){
            for (int j = 2 * i; j <= size; j+=i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    int *arr;
    arr = new int[max];
    
    sieve(arr, max);
    
    int cases, prime;
    cin >> cases;
    
    for (int i = 0; i < cases; i++){
        cin >> prime;
        
        int count = 0;
        for (int j = 2; j < max; j++){
            if (arr[j]){
                count++;
            }
            
            if (count == prime){
                cout << j << endl;
                break;
            }
        }
    }
    
    return 0;
}