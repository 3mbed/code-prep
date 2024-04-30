#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            vector<char> sV;
            vector<char> sT;
            for(char ch: s) {sV.push_back(ch);}
            for(char ch: t) {sT.push_back(ch);}
            sort(sV.begin(), sV.end());
            sort(sT.begin(), sT.end());

            for(int i=0; i<sV.size(); i++){
                if(sV[i] != sT[i]){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};

int main()
{
    Solution mSln;
    if (mSln.isAnagram("anagram", "nagaram")) {cout << "test case 1 passed " << endl;}
    if (!mSln.isAnagram("rat", "car"))        {cout << "test case 2 passed " << endl;}
    return 0;
}
