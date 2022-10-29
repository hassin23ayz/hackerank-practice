// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// https://cplusplus.com/reference/algorithm/sort/
// https://stackoverflow.com/a/8777619
// https://www.youtube.com/watch?v=mTjd2RtOOYA&list=PL0G2Ga9ALv6n7OD06Q7cjOMxKKCefG2B1&index=2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
    	vector<int>::iterator iL = numbers.begin();
    	vector<int>::iterator iH = numbers.end()-1; // always remember in C++ the iterator end is not the last element memory address, it is after that so decrement always 

    	int l = 0;
    	int h = numbers.size() - 1;
    	vector<int> resultV = {-1, -1};
    	bool found = false;

    	for (iL, iH; iL < numbers.end(), iH > numbers.begin(); )
        {
        	int sum = *iL + *iH;

        	// cout << *iL << "+" << *iH << " = " << sum << "\n";

        	if ( sum == target ){
        		found = true;
        		break;
        	}
        	else if (sum > target){
        		iH--;
        		h--;
        	}
        	else if (sum < target){
        		iL++;
        		l++;
        	}
        	else
        	{
        		//do nothing;
        	}
        }

        if(found == true){
        	resultV.at(0) = l+1;
        	resultV.at(1) = h+1;
        }

        return resultV;
    }
};

void iterate_thru_print(vector<int> nums)
{
	for(auto& eachElem : nums)
	{
		cout << eachElem << "\n";
	}
	cout << "----------\n";
}

int main(void)
{
	// creating a C standard array 

	int sample[] = {2,7,11,15};

	// converting the C array to a vector
	vector<int> sampleV(sample, sample + sizeof(sample)/(sizeof(sample[0])) );

	iterate_thru_print(sampleV);

	// sort the vector
	sort(sampleV.begin(), sampleV.end());

	iterate_thru_print(sampleV);

    //-----------------------------------------------------------
    Solution mSln;
    vector<int> result = mSln.twoSum(sampleV, 9);
	iterate_thru_print(result);

	return 0 ; 
}