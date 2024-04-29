#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {

private: 
    void myPrint(vector<int>& nums)
    {
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }

public:
    int findGCD(vector<int>& nums) {
        //first we sort the numbers
        sort(nums.begin(), nums.end());
        myPrint(nums);
        //we parse out the smallest and largest 
        int l_Num = nums[0];
        int h_Num = nums[nums.size()-1];
        cout << l_Num << " " << h_Num << endl;
        //now we put all the divisors for the smallest number in a vector & sort
        vector<int> lNumDivsors;    
        for(int i=1; i<=l_Num; i++){
            if ((l_Num % i) == 0){
                lNumDivsors.push_back(i);
            }            
        }
        sort(lNumDivsors.begin(), lNumDivsors.end());
        myPrint(lNumDivsors);
        //we do the same for the largest number as well 
        vector<int> hNumDivsors;
        for(int i=1; i<=h_Num; i++){
            if ((h_Num % i) == 0){
                hNumDivsors.push_back(i);
            }            
        }
        sort(hNumDivsors.begin(), hNumDivsors.end());
        myPrint(hNumDivsors);

        //now we compare in between both the vectors
        reverse(lNumDivsors.begin(), lNumDivsors.end());
        reverse(hNumDivsors.begin(), hNumDivsors.end());
        myPrint(lNumDivsors);
        myPrint(hNumDivsors);

        for(int i=0; i<lNumDivsors.size(); i++){
            int lNumNow = lNumDivsors[i];
            for(int j=0; j<hNumDivsors.size(); j++){
                int jNumNow = hNumDivsors[j];
                if(lNumNow == jNumNow){
                    return lNumNow;
                }
            }
        }
        return 0;
    }
};

int main()
{
    Solution mSln;
    int arr1[] = {2,5,6,9,10};
    int arr2[] = {7,5,6,8,3};
    int arr3[] = {3,3};

    vector<int> nums1(arr1, arr1+5);
    vector<int> nums2(arr2, arr2+5);
    vector<int> nums3(arr3, arr3+2);

    if (mSln.findGCD(nums1) == 2) {cout << "test case 1 passed " << endl;}
    if (mSln.findGCD(nums2) == 1) {cout << "test case 2 passed " << endl;}
    if (mSln.findGCD(nums3) == 3) {cout << "test case 3 passed " << endl;}
    return 0;
}
