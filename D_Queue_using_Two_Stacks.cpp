#include <stack>
#include <map>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int enqueue = 1;
const int dequeue = 2;
const int print = 3;

int main()
{
    int n;
    stack<int> s1, tempStack;
    int x;
    cin >> n;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == enqueue)
        {
            cin >> x;
            s1.push(x);
        }
        else if (op == dequeue)
        {
            stack<int> stacWithFirstItemRemoved;
            while(s1.size() >= 1) {
                tempStack.push(s1.top());
                s1.pop();
            }
            s1 = tempStack;
        }
        else if (op == print)
        {
            tempStack = s1;
            int latestVal;
            while (!tempStack.empty())
            {
                latestVal = tempStack.top();
                tempStack.pop();
            }
            cout << latestVal << endl;
        }
    }
}