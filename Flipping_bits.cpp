#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int x;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> x;
        x = ~x;
        cout << x << endl;
    }
}