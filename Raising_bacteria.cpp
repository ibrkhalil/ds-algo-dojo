#include <iostream>

using namespace std;

int ans = 0;

int main()
{
    int x;
    cin >> x;
    while (x > 0)
    {
        if (x % 2 == 1)
            ans++;
        x /= 2;
    }
    cout << ans;
}