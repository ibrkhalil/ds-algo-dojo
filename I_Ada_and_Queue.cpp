
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> dq;
    bool reversed = false;

    int operationsCount = 0;
    cin >> operationsCount;
    while (operationsCount--)
    {
        string operation;
        cin >> operation;
        if (operation == "toFront")
        {
            int x;
            cin >> x;
            if (!reversed)
            {
                dq.push_front(x);
            }
            else
            {
                dq.push_back(x);
            }
        }
        else if (operation == "front")
        {
            if (!dq.empty())
            {
                if (!reversed)
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
            else
            {
                cout << "No job for Ada?" << endl;
            }
        }
        else if (operation == "back")
        {
            {
                if (!dq.empty())
                {
                    if (!reversed)
                    {
                        cout << dq.back() << endl;
                        dq.pop_back();
                    }
                    else
                    {
                        cout << dq.front() << endl;
                        dq.pop_front();
                    }
                }
                else
                {
                    cout << "No job for Ada?" << endl;
                }
            }
        }
        else if (operation == "push_back")
        {
            int x;
            cin >> x;
            if (!reversed)
            {
                dq.push_back(x);
            }
            else
            {
                dq.push_front(x);
            }
        }
        else if (operation == "reverse")
        {
            reversed = !reversed;
        }
    }
}