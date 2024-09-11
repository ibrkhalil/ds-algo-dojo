#include <iostream>

using namespace std;

int n;
int tot(int arr[],int i) {
    if(i == n) {
        return 0;
    }
    return arr[i] + tot(arr, i+1);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        
        cin >> n;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << i+1 << ": " << tot(arr, 0) << endl;
    }
    
}