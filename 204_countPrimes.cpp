#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {

    }
};

int main()
{
    Solution mSln;
    if (mSln.countPrimes(10) == 4) {cout << "test case 1 passed " << endl;}
    if (mSln.countPrimes(0) == 0)  {cout << "test case 2 passed " << endl;}
    if (mSln.countPrimes(1) == 0)  {cout << "test case 3 passed " << endl;}
    return 0;
}
