// Left Rotation Problem

#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int dist = i-d;
        if (dist >= 0) {
            arr2[dist] = arr[i];
        } else {
            arr2[n-abs(dist)] = arr[i];
        }
    }
    for (int x : arr2) {
        cout << x << " ";
    }
}
