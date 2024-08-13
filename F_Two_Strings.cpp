#include <iostream>
#include <string>
#include <map>

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{
    FastIO
        string s;
    string s2;
    int n;
    cin >> n;
    while (n--)
    {
        map<char, int> db;
        cin >> s;
        cin >> s2;
        bool isCommon = false;
        for (int i = 0; i < s.size(); i++)
        {
            db.insert({s[i], 0});
        }

        for (int i = 0; i < s2.size(); i++)
        {
            if (db.find(s2[i]) != db.end())
            {
                isCommon = true;
            }
        }
        if (isCommon)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}