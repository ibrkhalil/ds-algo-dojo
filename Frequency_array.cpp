#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        set < int > db;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            db.insert(x);
        }
        if (db.size() == n) {
            cout << "prekrasnyy\n";
        }
        else {
            cout << "ne krasivo\n";
        }
    }
}