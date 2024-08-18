#include <iostream>

using namespace std;
int arr[200005];
int ans[200005];

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int l;
        int r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }
    for (int j = 1; j <= 2e5; j++)
    {
        arr[j] += arr[j - 1];
    }
    for (int j = 1; j <= 2e5; j++)
    {
        if (arr[j] >= k)
            ans[j] = 1;
        else
            ans[j] = 0;
    }
    for (int j = 1; j <= 2e5; j++)
    {
        ans[j] += ans[j - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << endl;
    }
}
