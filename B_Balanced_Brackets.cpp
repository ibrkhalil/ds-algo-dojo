#include <stack>
#include <iostream>

using namespace std;

char getMirrorBracket(char bracket)
{
    if (bracket == '{') {
        return '}';
    }
    if (bracket == '[') {
        return ']';
    }
    if (bracket == '(') {
        return ')';
    }
    return '0';
}

int main()
{
    int iterations;
    cin >> iterations;
    while (iterations--)
    {
        string s;
        cin >> s;
        bool balanced = true;
        for (uint i = 0; i < s.size() / 2; i++)
        {
            int targetIdx = s.size() - i - 1;
            if (s[targetIdx] != getMirrorBracket(s[i]))
            {
                balanced = false;
            }
        }
        if (balanced)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}