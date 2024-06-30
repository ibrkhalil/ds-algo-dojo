
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, shifts;
    cin >> n >> shifts;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while(shifts--) {
        int front = q.front();
        q.push(front);
        q.pop();
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " "; q.pop();
    }
}