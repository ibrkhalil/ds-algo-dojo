#include <iostream>
#include <string>
#include <vector>

using namespace std;
string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";


void printStringByMatch(int index, string input, char direction) {
    if(index == -1) {
        return;
    }
    if(direction == 'R') {
        cout << input[index - 1];
    } else {
        cout << input[index + 1];
    }
}

int main() {
    char direction;
    cin >> direction;
    string input;
    cin >> input;
    int size = input.size();
    for (int i = 0; i < size; i++)
    {
        vector<int> match;
        int charIdxIn1 = s1.find(input[i]);
        int charIdxIn2 = s2.find(input[i]);
        int charIdxIn3 = s3.find(input[i]);
        printStringByMatch(charIdxIn1, s1, direction);
        printStringByMatch(charIdxIn2, s2, direction);
        printStringByMatch(charIdxIn3, s3, direction);
    }
    
}