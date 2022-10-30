// https://leetcode.com/problems/valid-palindrome/

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

    	// remove the spaces and concat 

    	// take a new empty string 
    	// go through String s and other than alphanumeric discard all and add up 

    	string plainText;
    	for(int i=0; i<s.length(); i++)
    	{
    		if(  isalpha(s[i]) != 0 || isdigit(s[i]) != 0 ){
    			plainText.push_back(tolower(s[i]));
    		}
    	}
    	cout << plainText << "\n";

 		string reverseText;
 		for (int i = plainText.length()-1; i >= 0; i--)
 		{
 			reverseText.push_back(plainText[i]);
 		}
 		cout << reverseText << "\n";

 		if(plainText.compare(reverseText) == 0){
 			return true;
 		}
 		else{
 			return false;
 		}
    }
};

int main(void)
{
	Solution mSln;
	mSln.isPalindrome("A man, a plan, a canal: Panama");

	return 0;
}