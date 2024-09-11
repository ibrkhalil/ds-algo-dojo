#include <iostream>
#include <string>

using namespace std;

bool unreadable(int it, string s)
{
    bool valid = (isupper(s[it]) && (it % 2 != 0)) || (islower(s[it]) && (it % 2 == 0));
    if ((it == s.size() - 1))
    {
        return valid;
    }
    return valid && unreadable(it + 1, s);
}

int main()
{
    string s;
    cin >> s;
    int it = 0;
    if (unreadable(it, s))
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}