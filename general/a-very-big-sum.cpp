// A very big sum

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long x;
    unsigned long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
    }
    cout << sum;
    
}
