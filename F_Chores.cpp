#include <iostream>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tot = 0;
    for (int i = 0; i < n-k; i++)
    {
        tot+=arr[i];
    }
    cout << (tot + (k*x));
    
    
}