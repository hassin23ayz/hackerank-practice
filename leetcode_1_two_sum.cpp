// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    	int i,j;
    	// brute force
    	// take first elem as ref 
    	for(i=0; i<= nums.size()-2; i++){
    		// go through the next elems and compare
    		for(j=(i+1); j<= nums.size()-1; j++){
    			if((nums[i] + nums[j]) == target){
    				cout << i << " " << j << "\n";
    				break;
    			}
    		}
    	}

    	vector<int> result;
    	result.push_back(i);
    	result.push_back(j);

    	return result;
    }
};

int main(void)
{
	Solution mSln;

	vector<int> nums = {2,7,11,15};
	mSln.twoSum(nums, 9);

	return 0 ;
}