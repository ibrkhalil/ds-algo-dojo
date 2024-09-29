#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*Since we want numbers that their XOR is the same as their summation, It means that we need to find
    the number of zeros in the number binary representation and the answer will be 2^x which means
    every possibility of flipping each zero bit on and off*/
    unsigned long long int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        unsigned long long bit = (n & 1);
        if (bit == 0)
        {
            count++;
        }
        n >>= 1;
    }

    cout << (1LL << count);
}