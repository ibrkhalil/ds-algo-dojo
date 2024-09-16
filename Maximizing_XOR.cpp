#include <iostream>

using namespace std;

int main()
{
    int l, r;
    int mx = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r; j++)
        {
            mx = max(mx, i ^ j);
        }
    }
    cout << mx;
}