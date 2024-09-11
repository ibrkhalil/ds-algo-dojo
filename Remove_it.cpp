#include <iostream>

using namespace std;

int main()
{
    int N;
    int target;
    cin >> N >> target;
    string res;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (x != target)
        {
            cout << x << " ";
        }
    }
}