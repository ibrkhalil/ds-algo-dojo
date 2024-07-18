#include <iostream>
#include <queue>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> setty;
    string result;
    string s;
    string word;
    while (getline(cin, s))
        result += s + " ";
    for(int i = 0; i < result.size(); ++i) {
        if(isalpha(result[i])) result[i] = tolower(result[i]); else result[i]=' ';
        if(isalpha(result[i])) {
            word+=result[i];
        } else {
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
