#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if(!st.empty() && s[i] == st.top()) {
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }
    
    if(st.size() == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
}