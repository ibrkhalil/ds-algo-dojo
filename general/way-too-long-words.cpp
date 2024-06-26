#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string s;
        cin >> s;
        if (s.size() > 10)
        {
            cout << s[0];
            cout << s.size() - 2;
            cout << s[s.size() - 1];
        cout << endl;
            
        }
        else
        {
            cout << s << endl;
        }
    }
}
