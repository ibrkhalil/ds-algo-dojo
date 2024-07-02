
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> DequeInst;
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
                DequeInst.push_front(x);
            }
            else
            {
                DequeInst.push_back(x);
            }
        }
        else if (operation == "front")
        {
            if (!DequeInst.empty())
            {
                if (!reversed)
                {
                    cout << DequeInst.front() << endl;
                    DequeInst.pop_front();
                }
                else
                {
                    cout << DequeInst.back() << endl;
                    DequeInst.pop_back();
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
                if (!DequeInst.empty())
                {
                    if (!reversed)
                    {
                        cout << DequeInst.back() << endl;
                        DequeInst.pop_back();
                    }
                    else
                    {
                        cout << DequeInst.front() << endl;
                        DequeInst.pop_front();
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
                DequeInst.push_back(x);
            }
            else
            {
                DequeInst.push_front(x);
            }
        }
        else if (operation == "reverse")
        {
            reversed = !reversed;
        }
    }
}