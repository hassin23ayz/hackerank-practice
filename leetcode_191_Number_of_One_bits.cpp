// https://leetcode.com/problems/number-of-1-bits/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

// Solution using string operation 
// class Solution {
// public:
//     int hammingWeight(uint32_t n) {

//         int result = 0;
//         bitset<32> bits = n;
//         string bitStr = bits.to_string();

//         for (int i = 0; i <= bitStr.length()-1; i++)
//         {
//             if(bitStr[i] == '1'){
//                 result++;
//             }
//         }

//         return result;
//     }
// };

// Solution using bit operation 
class Solution {
public:
    int hammingWeight(uint32_t n) {

        int result = 0;
        uint32_t mux = 0x0001;

        for (int i = 0; i <= 31; i++)
        {
            bitset<32> bTmp = n & (mux << i);
            cout << bTmp.to_string() << "\n";

            if(( n & (mux << i) ) > 0 ){
                result++;
            }

        }

        return result;
    }
};


int main(void)
{

    // convert n into a bit string 
    // lookup through the string and find number of 1 characters 

    // bitset<32> b;
    // b = 3;

    // cout << "3" << "in binary is " << b << "\n";

    // string bStr; 
    // bStr = b.to_string();

    // cout << bStr << "\n";

    Solution mySln;
    mySln.hammingWeight(3);
}

