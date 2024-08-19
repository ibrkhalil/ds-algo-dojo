#include <iostream>

using namespace std;

int main()
{
    long long int n, time;
    cin >> n >> time;
    long long int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    long long int sum = 0, j = 1, count=0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum <= time)
        {
            count++;
        }
        else
        {
            sum-=arr[j];
            j++;
        }
    }
    cout << count << endl;
}