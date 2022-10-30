// https://leetcode.com/problems/valid-anagram/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void iterate_over_print(string str)
{
	for(int i=0; i<str.size(); i++)
	{
		cout << str[i] << "\n\r";
	}
}


class Solution {
public:
    bool isAnagram(string s, string t) {

    	// if lengths are not equal then return false
    	// sort s alphabetically
    	// sort t alphabetically
    	// check them with string compare like function 

    	if(s.size() != t.size())
    	{
    		return false;
    	} 

    	sort(s.begin(), s.end());
    	sort(t.begin(), t.end());

    	if(s.compare(t) == 0){
    		return true;
    	}
    	else{
    		return false;
    	}

    	// cout << s << "\n";
    	// cout << t << "\n";

    }
};


int main(void)
{

	// can we iterate over a string 

	string str  = "hello";
	string str2 = "oellh";


	Solution mSln;
	mSln.isAnagram(str, str2);

	return 0;
}