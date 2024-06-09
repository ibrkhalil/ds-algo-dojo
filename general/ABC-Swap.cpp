#include <iostream>
#include <math.h>

using namespace std;

int main() {
int x, y, z;
cin >> x >> y >> z;
int temp = 0;
temp = x;
x = y;
y = temp;

temp = x;
x = z;
z = temp;

cout << x << " " << y << " " << z;

}
