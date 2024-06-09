#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    int cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1]) {
        continue;
        }
        cnt++;
    }
    cout << cnt;
}
