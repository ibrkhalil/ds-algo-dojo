#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n;
    int sareejaScore = 0, dimaScore = 0;
    cin >> n;
    deque<int> dq;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        dq.push_back(x);
    }

    bool SareejasTurn = true;

    while (!dq.empty())
    {
        int numToBeAdded;
        if (dq.size() >= 2)
        {
            numToBeAdded = max(dq.front(), dq.back());
            if (dq.front() > dq.back())
            {
                dq.pop_front();
            }
            else
            {
                dq.pop_back();
            }
        }
        else
        {
            numToBeAdded = dq.front();
            dq.pop_front();
        }

        if (SareejasTurn)
        {
            sareejaScore += numToBeAdded;
        }
        else
        {
            dimaScore += numToBeAdded;
        }
        SareejasTurn = !SareejasTurn;
    }
    cout << sareejaScore << " " << dimaScore;
}