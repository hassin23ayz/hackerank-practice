// https://leetcode.com/problems/3sum/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {

private:
    vector<vector<int>> finalResultV;
    void storeOnlyUniqueVector(vector<int>& newResult)
    {
        if (find(finalResultV.begin(), finalResultV.end(), newResult) != finalResultV.end())
        {
            // element already exists
            ;
        }
        else{
            finalResultV.push_back(newResult);
        }
    }

public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        

        // brute forcing 
        // first check if all the elems are accessible in right way 
        for(int base=0; base<=nums.size()-3; base++)
        {
            // cout << "at base: " << nums[base] << "\n";
            for(int i=(base+1); i<=(nums.size()-2); i++){
                for(int j=(i+1); j<=(nums.size()-1); j++){
                    cout << "[" << nums[base] << "," << nums[i] << "," << nums[j] << "]" << "\n" ;
                    if((nums[base] + nums[i] + nums[j]) == 0){
                        vector<int> resultNow;

                        resultNow.push_back(nums[base]);
                        resultNow.push_back(nums[i]);
                        resultNow.push_back(nums[j]);

                        sort(resultNow.begin(), resultNow.end());

                        storeOnlyUniqueVector(resultNow);
                        
                    }
                }
                // cout << "\n";
            }
            // cout << "\n";
        }

    return finalResultV;
    }
};


int main(void)
{

    vector<int> nums = {-1,0,1,2,-1,-4};

    Solution mSln;
    mSln.threeSum(nums);

    return 0;
}