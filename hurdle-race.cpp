// Hurdle Race

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int highestHurdle = -1;
    for (int num:arr) {
        if (num > highestHurdle) {
            highestHurdle = num;
        }
    }
    cout << max(0, highestHurdle - k);
    
}
