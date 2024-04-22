/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

int main()
{
    // 0000    0
    // 0001    1
    // 0010    2
    // 0011    3
    // 0100    4
    // 0101    5
    
    // 0000 0000 0000 0100
    // 0010 0000 0000 0000
    uint32_t num = 4;
    
    // 0010    2 

    // ---------------------------- very simple unit test -------------------------
    // check if you divide the num by base 2 then do we get all the bits

    // printf("%d\n\r", num%2);
    // printf("%d\n\r", (num/2)%2);
    // printf("%d\n\r", ((num/2)/2)%2);

    int bit0 = num%2;                   
    int bit1 = (num/2)%2;
    int bit2 = ((num/2)/2)%2;
    int bit3 = (((num/2)/2)/2)%2;
    
    printf("4 is : %d %d %d %d\n\r", bit2, bit1, bit0, bit3);
    
    // sum of [ pow(2,bitPosition)*bitValue ] 
    int sumP1 = (pow(2,0)*bit0) + (pow(2,1)*bit1) + (pow(2,2)*bit2) + (pow(2,3)*bit3);
    printf("sumP1: %d\n\r", sumP1);
    
    int rev0 = bit3;  
    int rev1 = bit2;
    int rev2 = bit1;
    int rev3 = bit0;
    
    int sumP2 = (pow(2,0)*rev0) + (pow(2,1)*rev1) + (pow(2,2)*rev2) + (pow(2,3)*rev3);
    printf("sumP2: %d\n\r", sumP2);
    
    
    // ---------------------------- very simple unit test -------------------------
    
    // ---------------------------- loop to extract all the bits works -----------------------------
    // int divN = num;
    // for(int i=0; i<32; i++){
        
    //     printf("%d ", divN % 2);
    //     divN = divN / 2 ;
    // }
    // printf("\n\r");
    // ---------------------------- loop to extract all the bits works ----------------------------- 
    
    // we want to create a vector where we will put 
    // first we will check how 
    
    
    
    return 0;
}

