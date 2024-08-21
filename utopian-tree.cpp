// Utopian tree

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            cout << 1 << "\n";
            continue;
        } else if (arr[i] == 1) {
            cout << 2 << "\n";
            continue;
        }
        int val = 1;
        for (int i = 0; i < arr[i]; ++i) {
            if (i % 2 == 0) {
                val++;
            } else val+=val;
        }
        cout << val << "\n";
    }
    
    
}
