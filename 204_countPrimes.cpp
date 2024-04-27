// https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html  helped this


#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {

private:

void generatePrimeNumbers(int n){

    //create an array of 10 to first flag that all of them are Primes
    vector<bool> primes(10, true);
    //prime numbers 2,3,5,7,9,11.....
    //prime numbers are not multiple of 2 
    //prime numbers are not multiple of 3 
    //prime numbers are not multiple of 5
    //so going forward non-prime numbers are multiple of the one we are now counting from 2 
    //so as we loop through   
    primes[0] = false;
    primes[1] = false;
    for(unsigned long i=2; i<n; i++){
        // as we have already flaged them all true so here this logic check finds the first counter element too
        if(primes[i] == true)
        {
            //from first counter element now we will loop through every multiple times and make other elems false 
            unsigned long starCounter = i*i;
            for (unsigned long m = starCounter; m < n; m=m+i)
            {
                primes[m] = false;
            }
        }
    }
    // now let's print all nums and flags 
    for(unsigned long i=0; i<n; i++){
        cout << i << " ";
    }
    cout << "-----------------------" << endl;
    for(bool eachFlag: primes){
        cout << eachFlag << " " ;
    }
    cout << "-----------------------" << endl;

    unsigned long prime_count = 0;
    for (unsigned long i = 0; i < n; i++){
        if(primes[i] == true){
            prime_count++;
        }
    }
    cout << "prime count: " << prime_count << endl;
    

}

public:
    int countPrimes(int n) 
    {
        generatePrimeNumbers(10);
        return 0;
    }
};

int main()
{
    Solution mSln;
    if (mSln.countPrimes(10) == 4) {cout << "test case 1 passed " << endl;}
    // if (mSln.countPrimes(0) == 0)  {cout << "test case 2 passed " << endl;}
    // if (mSln.countPrimes(1) == 0)  {cout << "test case 3 passed " << endl;}

    cout << "hello world" << endl;

    return 0;
}
