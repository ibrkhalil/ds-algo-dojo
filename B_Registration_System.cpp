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
    int n;
    cin >> n;
    map<string, int> db;
    while (n--)
    {
        cin >> s;
        int StringCount;
        int query = db[s];
        db.insert({s, StringCount});
        if (db.find(s) == db.end())
        {
            StringCount = 0;
        }
        else
        {
            StringCount = db[s]++;
        }
        if (query == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s + to_string(StringCount) << endl;
        }
    }
}