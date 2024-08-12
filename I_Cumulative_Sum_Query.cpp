#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    ans[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        ans[i] = ans[i - 1] + arr[i];
    }
    int queriesCount;
    cin >> queriesCount;
    while (queriesCount--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r] - (l == 0 ? 0 : ans[l-1]) << endl;
    }
}