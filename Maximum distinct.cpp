#include <iostream>
#include <map>
#include <stack>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char arr[n] = {};
    int freq[26] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = k;
    int mx = 0;

    for (int i = l; i < r; ++i)
    {
        freq[arr[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {
            mx++;
        }
    }

    int cnt = 0;
    while (r < n)
    {
        freq[arr[l] - 'a']--;
        l++;

        freq[arr[r] - 'a']++;
        r++;

        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] > 0)
            {
                cnt++;
            }
        }
        mx = max(cnt, mx);
        cnt = 0;
    }
    cout << mx;
}