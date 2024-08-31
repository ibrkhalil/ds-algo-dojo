#include <iostream>
#include <vector>

using namespace std;

bool ok(int mid, int n, int arr[], int k)
{
    int lastStripAppliedAt = -1;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (lastStripAppliedAt < arr[i])
        {
            lastStripAppliedAt = arr[i] + mid - 1;
            counter++;
        }
    }
    return counter <= k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int l = 0, r = 10e9, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(mid, n, arr, k))
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}