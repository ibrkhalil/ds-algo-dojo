#include <iostream>

using namespace std;
int i = 0;

int getDigitSummation(string x)
{
    if (x.size() == 1)
        return (int)(x[0] - '0');

    int lastItem = x.back() - '0';
    x.pop_back();
    return lastItem + getDigitSummation(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int k;
    cin >> s >> k;
    string p;
    long long int firstIteration = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int charval = s[i] - '0';
        firstIteration += charval * k;
    }
    p = to_string(firstIteration);

    if (p.size() == 1)
    {
        cout << p;
    }
    else
    {
        int iterator = getDigitSummation(p);
        while (iterator >= 10)
        {
            iterator = getDigitSummation(to_string(iterator));
        }
        cout << iterator;
    }
}
