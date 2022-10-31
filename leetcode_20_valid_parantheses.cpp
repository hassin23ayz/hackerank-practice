//https://leetcode.com/problems/valid-parentheses/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

class Solution {

private:
    bool check_if_closing_brace_is_found_till_end(char ch, int pos, string& s)
    {
        char chEnd;
        if(ch == '(') chEnd = ')';
        if(ch == '{') chEnd = '}';
        if(ch == '[') chEnd = ']';

        for (int i = pos+1; i <= s.length()-1; i++)
        {
            if(s[i] == chEnd){
                return true;
            }
        }

        return false;

    }

public:
    bool isValid(string s) {

        for(int i=0; i<=s.length()-1)
        {
            if( (s[i] == '(') || (s[i] == '{') || (s[i] == '[') )
            {

                if ( check_if_closing_brace_is_found_till_end(ch, i, s) )
                {
                    i++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};


int main(void)
{


    Solution mySln;
    mySln.isValid("[]");


    return 0;
}
