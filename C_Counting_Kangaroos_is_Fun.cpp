#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    int answer = n;
    int half = n / 2;
    int l = half, r = n;
    while (l > 0 && r > half)
    {
        if (arr[r] >= (2 * arr[l]))
        {
            answer--;
            r--;
            l--;
        }
        else
        {
            l--;
        }
    }
    cout << answer;
}