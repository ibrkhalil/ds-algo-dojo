#include <iostream>
#include <string>

using namespace std;

int main()
{
    string recipe;
    cin >> recipe;

    int b = 0, s = 0, c = 0;
    for (int i = 0; i < recipe.size(); i++)
    {
        if (recipe[i] == 'B')
        {
            b++;
        }
        else if (recipe[i] == 'S')
        {
            s++;
        }
        else if (recipe[i] == 'C')
        {
            c++;
        }
    }

    int ownedB, ownedS, ownedC;
    cin >> ownedB >> ownedS >> ownedC;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long int money;
    cin >> money;

    long long int cnt = 0;
    int zeros = 0;
    int toCheck = (b > 0) + (s > 0) + (c > 0);
    while (true)
    {
        if (ownedB >= b && ownedS >= s && ownedC >= c)
        {
            ownedB -= b;
            ownedS -= s;
            ownedC -= c;
            cnt++;
        }
        else
        {
            if (ownedB < b && pb <= money)
            {
                // Buy burger
                ownedB++;
                money -= pb;
            }
            else if (ownedS < s && ps <= money)
            {
                // Buy sausage
                ownedS++;
                money -= ps;
            }
            else if (ownedC < c && pc <= money)
            {
                // Buy cheese
                ownedC++;
                money -= pc;
            }
            else
                break;
        }
        int zeros = 0;
        if (ownedB == 0)
            zeros++;
        if (ownedC == 0)
            zeros++;
        if (ownedS == 0)
        {
            zeros++;
        }
        if (zeros == toCheck)
            break;
    }
    int oneFullSandwitchRequirementsInMoney = (b * pb) + (s * ps) + (c * pc);
    cnt += (money / oneFullSandwitchRequirementsInMoney);
    cout << cnt;
}