#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    string leftStr;
    string result;
    bool lessThanOne = false;
    int left = s[0] - '0';
    if(left == 0)
    lessThanOne = true;
    int len = s.size();
    char PMorAM = s[len-2];
    
    if(PMorAM == 'P')
    {
        if(s[0] == '1' && s[1] == '2')
        leftStr = "12";
        else if(lessThanOne)
        leftStr = to_string(s[1] - '0' + 12);
        else {
        int num1 =  (s[0] - '0');
        int num2 =  (s[1] - '0');
        
        leftStr = to_string((num1*10)+num2 + 12);
        }
    }
    else
    {
        if(s[0] == '1' && s[1] == '2')
        leftStr = "00";
        else
        {
        int num1 =  (s[0] - '0');
        if(num1 == 0)
        leftStr='0';
        int num2 =  (s[1] - '0');
        leftStr += to_string((num1*10)+num2);
        }
    }
    result += leftStr;
    for(int i = 2; i < len - 2; ++i) 
    result+=s[i];
    cout << result;
}