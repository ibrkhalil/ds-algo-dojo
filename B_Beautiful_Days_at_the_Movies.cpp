
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, divisor, cnt=0;
    cin >> x >> y >> divisor;
    for (int i = x; i <= y; i++)
    {
        string x_to_string = to_string(i);
        int intVal = stoi(x_to_string);
        reverse(x_to_string.begin(), x_to_string.end());
        int mirrorIntVal = stoi(x_to_string);
        if ((intVal - mirrorIntVal) % divisor == 0) {
            cnt++;
        }
    }
    cout << cnt;
}
