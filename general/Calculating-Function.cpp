#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long oddSum = 0;
    if (n % 2 == 0) {
        oddSum = pow(n/2, 2);
    } else
        oddSum = pow(ceil((float(n) / 2)), 2);
    
    long long oddAndEvenSum = ((n * (n+1)) / 2);
    cout << oddAndEvenSum + -2*oddSum;
}
