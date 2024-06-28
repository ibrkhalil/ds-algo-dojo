
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int cnt1=0, cnt2=0;
    while(prev_permutation(arr, arr + n)) {
        cnt1++;
    }
    while(prev_permutation(arr2, arr2 + n)) {
        cnt2++;
    }
    cout << abs(cnt2 - cnt1);
    
    
}