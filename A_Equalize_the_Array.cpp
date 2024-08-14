#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int freqArray[100] = {0}, arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freqArray[x]++;
    }

    int mx = 0;
    for (int i = 0; i < 100; ++i)
    {
        mx = max(mx, freqArray[i]);
    }
    cout << n-mx;
}