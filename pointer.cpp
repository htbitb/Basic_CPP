#include <cmath>
#include <cstdio>
// #include <vector>
#include <iostream>
// #include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    int Number;
    cin >> N;
    int arr[N];
    if (N >= 1 && N <= 1000){
        for(int i = 0; i < N ;i++){
        cin >> Number; 
        if(Number >= 1 && Number <= 10000){
            arr[i] = Number;
            Number = 0;
        }
        else break;
        } 
    }
    else;
    
    cout << N << "\n";
    for (int j = N; j >= 1; j--){
        cout << arr[j-1] << " ";
    }
    return 0;
}