#include <stack>
#include <map>
#include <iostream>
#include <vector>

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
    stack<int> s1, s2;
    while (n--)
    {
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            int x;
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
                s2.pop();
            }
            break;
        case 3:
            s2.top();
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                cout << s2.top() << endl;
            }
            else
            {
                cout << s2.top() << endl;
            }

        default:
            break;
        }
    }
}