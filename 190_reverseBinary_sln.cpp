// https://leetcode.com/problems/reverse-bits/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    uint32_t num = 4;  // 0100 
    // if reversed it will be 0010 = 2 
    
    vector<int> bits;
    uint32_t divN = num;
    for(int i=0; i<32; i++){
         bits.push_back( divN%2 );
         divN = divN / 2;
    }
    
    for(int eachElem: bits){
        printf("%d ", eachElem);
    }
    printf("\n\r");
    
    reverse(bits.begin(), bits.end());
    for(int eachElem: bits){
        printf("%d ", eachElem);
    }
    printf("\n\r");
    
    uint32_t revNum = 0;
    for(int pos=31; pos>=0; pos--){
        revNum = revNum + (pow(2, pos)*bits.at(pos));
    }
    
    cout << revNum << endl;
    
    return 0;
}
