#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    priority_queue<int> q;
    int n;
    cin >> n;
    long long int x;
    long long int potionsDrank = 0;
    int potionsDrankCount = 0;
    while (n--)
    {
        cin >> x;
        if (x >= 0)
        {
            potionsDrank += x;
            potionsDrankCount++;
        }
        else if (x < 0)
        {
            if ((potionsDrank + x) < 0)
            {
                if (!q.empty() && x > q.top())
                {
                    potionsDrank -= q.top();
                    q.pop();
                    potionsDrank += x;
                    q.push(x);
                }
            }
            else
            {
                potionsDrank += x;
                potionsDrankCount++;
                q.push(x);
            }
        }
    }
    cout << potionsDrankCount;
}