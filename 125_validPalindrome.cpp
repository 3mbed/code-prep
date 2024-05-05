#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string validFwStr = "";
        for(int i=0; i<=s.length(); i++){
            if( ((s[i] >= 'A')&&(s[i] <= 'Z')) || 
                ((s[i] >= 'a')&&(s[i] <= 'z')) ||
                ((s[i] >= '0')&&(s[i] <= '9')) )
            {
                if((s[i] >= 'A')&&(s[i] <= 'Z')){
                    validFwStr.push_back(tolower(s[i]));
                }
                else{
                    validFwStr.push_back(s[i]);
                }
            } 
        }
        string tmpStr = validFwStr;
        reverse(tmpStr.begin(), tmpStr.end());

        if(tmpStr.size() == validFwStr.size()){
            for(int i=0; i<tmpStr.size(); i++){
                if(tmpStr[i] != validFwStr[i]){
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
    string str1 = "A man, a plan, a canal: Panama";
    string str2 = "race a car";
    string str3 = " ";

    if (mSln.isPalindrome(str1)) {cout << "test case 1 passed " << endl;}
    if (!mSln.isPalindrome(str2)) {cout << "test case 2 passed " << endl;}
    if (mSln.isPalindrome(str3)) {cout << "test case 3 passed " << endl;}
    return 0;
}
