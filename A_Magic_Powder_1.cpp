#include <iostream>

using namespace std;

int main()
{
    int n, magic;
    cin >> n >> magic;
    int requirements[n + 1];
    int owned[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> requirements[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> owned[i];
    }

    int mx = 0;
    for (int i = 1; i <= 1e4; i++)
    {
        int neededMagicSoFar = 0;
        for (int j = 1; j <= n; j++)
        {
            int canMakeIthCookie = owned[j] - (i * requirements[j]);
            if (canMakeIthCookie < 0)
            {
                neededMagicSoFar += canMakeIthCookie;
            }
        }
        if (abs(neededMagicSoFar) <= magic)
        {
            mx = max(mx, i);
        }
    }
    cout << mx;
}