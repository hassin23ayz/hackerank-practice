// https://leetcode.com/problems/contains-duplicate/
// https://youtu.be/3OamzN90kPg

// brute force has O(N2) complexity 
// solve is sorting and lookup O(1)

#include <iostream>
#include <vector>
using namespace std;

// Solution using iterator slower than Solution_element_index_O1
class Solution_iterator_O1 {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        vector<int>::iterator fixed;
        vector<int>::iterator move;
        
        sort(nums.begin(), nums.end());

        bool ret = false;

        if(nums.size() > 0)
        {
            for (fixed = nums.begin(),
                 move  = fixed+1;

                 fixed <= nums.end()-2,
                 move <= nums.end()-1;
                 
                 fixed++,
                 move++)
            {
                if(*move == *fixed)
                {
                    return true;
                }
            }                
        }
        return ret;
    }
};

// Solution using element access fastest using O(n) 
class Solution_element_index_O1 {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        bool ret = false;

        int i,j;

        if(nums.size() > 0)
        {
            for (i = 0, j=i+1; i<=nums.size()-2, j<=nums.size()-1; i++,j++)
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }
            }               
        }
        return ret;
    }
};

// solution using brute force : time limite exceeded O(2)
class Solution_iterator_bruteForce_02 {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        vector<int>::iterator fixed;
        vector<int>::iterator move;
        
        sort(nums.begin(), nums.end());

        bool ret = false;

        if(nums.size() > 0)
        {
            for (fixed = nums.begin(); fixed <= nums.end()-2; fixed++)
            {
                for(move = fixed+1; move <= nums.end()-1; move++)
                {
                    if(*move == *fixed)
                    {
                        return true;
                    }
                }
            }
        }
        return ret;
    }
};

int main(void)
{
    vector<int> nums = {0,4,5,0,3,6};

    //{1,5,-2,-4,0};

    //{1,2,3,1};

    Solution mSln;
    mSln.containsDuplicate(nums);
    return 0 ; 
}