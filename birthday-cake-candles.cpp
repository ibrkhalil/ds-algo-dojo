// Hurdle Race

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int highestCandle = -1, occurrences = 0;
    for (int num:arr) {
        if (num > highestCandle) {
            highestCandle = num;
        }
        if (num == highestCandle) {
            ++occurrences;
        }
    }

    cout << occurrences;
    
}
