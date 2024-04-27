#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
            // we will generate fibonacci series till n
            vector <int> fibSeries;
            fibSeries.push_back(0);
            fibSeries.push_back(1);
            for (size_t i = 0; i < n; i++){
                fibSeries.push_back(fibSeries[i]+fibSeries[i+1]);
            }
            for(int i=0; i<fibSeries.size(); i++){
                cout << fibSeries[i] << " " ;
            }
            cout << "------------------" << endl;
            return fibSeries[fibSeries.size()-2];
    }
};

int main()
{
    Solution mSln;
    if (mSln.fib(2) == 1) {cout << "test case 1 passed " << endl;}
    if (mSln.fib(3) == 2) {cout << "test case 2 passed " << endl;}
    if (mSln.fib(4) == 3) {cout << "test case 3 passed " << endl;}
    return 0;
}
