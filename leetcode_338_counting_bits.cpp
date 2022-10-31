// https://leetcode.com/problems/counting-bits/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;


class Solution {

private:

    int hammingWeight(uint32_t n) {

        int result = 0;
        uint32_t mux = 0x0001;

        for (int i = 0; i <= 31; i++)
        {

            if(( n & (mux << i) ) > 0 ){
                result++;
            }

        }

        return result;
    }

public:
    vector<int> countBits(int n) {
        
        //create a vector of size n and insert or push 0 into it 
        //create a small function that returns the number of 1 bits of a number 
        
        vector<int> result; 
        for (int i = 0; i <=n; i++)
        {
            result.push_back( hammingWeight(i) );
        }

    return result;
    }
};

int main(void)
{
    Solution mySln;
    mySln.countBits(2);

    return 0;
}