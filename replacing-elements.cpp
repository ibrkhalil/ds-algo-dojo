#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int iterations;
    cin >> iterations;
    bool found = false;
    int max = -1;

    while (iterations--)
    {
        max = -1;
        cin >> n >> k;
        int arr[n];
        for (int arrIdx = 0; arrIdx < n; arrIdx++)
        {
            cin >> arr[arrIdx];
            if (arr[arrIdx] >= max)
            {   max = arr[arrIdx];
            }
        }

        if (max <= k) {
            found = true;
        }

        if (!found)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((arr[i] + arr[j] <= k) && i != j)
                    {
                        found = true;
                    }
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        found = false;
    }
}