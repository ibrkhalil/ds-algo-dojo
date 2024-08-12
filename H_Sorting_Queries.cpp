#include <iostream>
#include <string>
#include <map>
#include <deque>
#include <queue>

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{
    const int add = 1;
    const int printAndRemoveFirst = 2;
    priority_queue<int, vector<int>, greater<int> > pq;
    FastIO;
    int n;
    cin >> n;
    int x, y;
    queue<int> q;
    while (n--)
    {
        cin >> x;
        if (x == add)
        {
            cin >> y;
            q.push(y);
        }
        else if (x == printAndRemoveFirst)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
                pq.pop();
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else {
            while(!q.empty()){
                pq.push(q.front());
                q.pop();
            }
        }
    }
}