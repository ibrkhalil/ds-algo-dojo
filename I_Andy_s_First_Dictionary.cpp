#include <iostream>
#include <queue>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> setty;
    string result;
    string s;
    while (std::getline(std::cin, s))
        result += s + " ";
        vector<string> newResult;
        string word;
    for(int i = 0; i < result.size(); ++i) {
        if(result[i] == '.' || result[i] == ':' || result[i] == '"') {
            continue;
        }
        char lowerCasedChar = tolower(result[i]);
        if(isalpha(lowerCasedChar)) {
            word += lowerCasedChar;
        } else if(lowerCasedChar == ' ') {
            if(word != "")
            setty.insert(word);
            word = "";
        }
    }
    auto startIt = setty.begin();
    while(startIt != setty.end()) {
        cout << *startIt << endl;
        startIt++;
    }
    

}
