#include <iostream>

using namespace std;

bool OK(long long int mid, int n, long long int owned[], long long int requirements[], long long int magic)
{
    long long int neededMagicSoFar = 0;
    for (long long int j = 1; j <= n; j++)
    {
        long long int canMakeIthCookie = owned[j] - (long long)(mid * requirements[j]);
        if (canMakeIthCookie < 0)
        {
            neededMagicSoFar += canMakeIthCookie;
        }
    }
    if (abs(neededMagicSoFar) <= magic)
    {
        return true;
    }
    return false;
}

int main()
{
    long long int n, magic;
    cin >> n >> magic;
    long long int requirements[n + 1];
    long long int owned[n + 1];
    for (long long int i = 1; i <= n; i++)
    {
        cin >> requirements[i];
    }
    for (long long int i = 1; i <= n; i++)
    {
        cin >> owned[i];
    }

    long long int mx = 0;
    long long int l = 1, r = 2e9 + 1;
    while (l <= r)
    {
        long long int mid = (l + r) / 2;
        if (OK(mid, n, owned, requirements, magic))
        {
            l = mid + 1;
            mx = max(mx, mid);
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << mx;
}