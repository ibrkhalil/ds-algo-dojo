#include <iostream>

using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;
    long long int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    long long sd = 1e15, s = 1, e = 1, sum = 0;
    while (s <= n)
    {
        while (e <= n && sum < x)
        {
            sum += arr[e];
            e++;
        }
        if (sum >= x)
        {
            sd = min(sd, e - s);
            sum -= arr[s++];
        }
        else
            break;
    }
    if (sd == 1e15)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sd << endl;
    }
}