// https://leetcode.com/problems/binary-search/
// https://www.educative.io/answers/how-to-iterate-through-a-vector-in-cpp
// https://stackoverflow.com/questions/57586221/what-is-the-difference-between-auto-and-auto

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator iV;
        int i;
        int result = -1;

        for(i=0, iV=nums.begin(); iV<nums.end(); iV++, i++)
        {
            if(*iV == target){
                result = i;
                break;
            }
        }
        return result;
    }
};

void iterate_print(vector<int>& rVect)
{
	vector<int>::iterator iV;                    // iV is a pointer

	for ( iV = rVect.begin(); iV<rVect.end(); iV++)
	{
		cout << *iV << "\n";
	}

	cout << "----------- \n";

	for (auto& eachElem : rVect)				// eachElem is a reference 
	{
		cout << eachElem << "\n";
	}
}


int main(void)
{
	vector<int> mVect = {1,2,3,4,5,6};

	Solution mSln;
	cout << mSln.search(mVect, 3) << "\n\r";


	return 0;
}