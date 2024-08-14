#include <iostream>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> valuesFrequency;
    unordered_map<int, int> frequencyOfFreqs;
    int INSERTION_QUERY = 1, DECREMENT_QUERY = 2, IS_ANY_INTEGER_FREQ_EQUAL_TO_X = 3;
    int queryCount, queryType, x;
    cin >> queryCount;
    while (queryCount--)
    {
        cin >> queryType;
        cin >> x;
        if (queryType == INSERTION_QUERY)
        {
           frequencyOfFreqs[valuesFrequency[x]]--;
           valuesFrequency[x]++;
           frequencyOfFreqs[valuesFrequency[x]]++;
        }
        if (queryType == DECREMENT_QUERY && valuesFrequency[x] > 0)
        {
           frequencyOfFreqs[valuesFrequency[x]]--;
           valuesFrequency[x]--;
           frequencyOfFreqs[valuesFrequency[x]]++;
        }
        if (queryType == IS_ANY_INTEGER_FREQ_EQUAL_TO_X)
        {
            cout << (frequencyOfFreqs[x] > 0) << endl;
        }
    }
}