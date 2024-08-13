#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<char> IGNORE_LIST;
    IGNORE_LIST.push_back('{');
    IGNORE_LIST.push_back('}');
    IGNORE_LIST.push_back(',');
    IGNORE_LIST.push_back(' ');
    set<char> unique_chars;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != '{' &&
        s[i] != '}' &&
        s[i] != ',' &&
        s[i] != ' ') {
            unique_chars.insert(s[i]);
        }
    }
    cout << unique_chars.size();
    
}