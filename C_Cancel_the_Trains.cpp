#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int bottomTrains = 0, leftTrains = 0;
        cin >> bottomTrains >> leftTrains;
        set<int> s;
        int x;
        int crashes = 0;
        while(bottomTrains--) {
            cin >> x;
            s.insert(x);
        }

        while(leftTrains--) {
            cin >> x;
            auto inserted = s.insert(x);
            if(!inserted.second) {
                crashes++;
            }
        }
        cout << crashes << endl;

    }
}