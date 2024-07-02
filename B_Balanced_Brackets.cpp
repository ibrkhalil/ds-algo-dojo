#include <stack>
#include <map>
#include <iostream>

using namespace std;

char getMirrorBracket(char bracket)
{
    if (bracket == '}')
    {
        return '{';
    }
    if (bracket == ']')
    {
        return '[';
    }
    if (bracket == ')')
    {
        return '(';
    }
    return '0';
}

int main()
{
    int iterations;
    cin >> iterations;
    while (iterations--)
    {
        bool balanced = true;
        stack<char> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty())
                {
                    if (st.top() == getMirrorBracket(s[i]))
                    {

                        st.pop();
                        continue;
                    }
                    else
                    {
                        balanced = false;
                        break;
                    }
                }
                else
                {
                    balanced = false;
                    break;
                }
            }
        }
        if (balanced && st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}