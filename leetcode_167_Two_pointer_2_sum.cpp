// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// https://cplusplus.com/reference/algorithm/sort/
// https://stackoverflow.com/a/8777619 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
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

	int sample[] = {32,71,12,45,26,80,53,33};

	// converting the C array to a vector
	vector<int> sampleV(sample, sample + sizeof(sample)/(sizeof(sample[0])) );

	iterate_thru_print(sampleV);

	// sort the vector
	sort(sampleV.begin(), sampleV.end());

	iterate_thru_print(sampleV);

	return 0 ; 
}