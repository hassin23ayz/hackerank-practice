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
            //cout << s[i] << "\n";
            if(s[i] == chEnd)
            {
                //cout << chEnd << "\n";
                return true;
            }
        }
        return false;

    }

public:
    bool isValid(string s) 
    {

        bool ans = true;
        for(int i=0; i<=s.length()-2; i++)
        {
            if( (s[i] == '(') || (s[i] == '{') || (s[i] == '[') || (s[i] == ')') || (s[i] == '}') || (s[i] == ']') )
            {
                // cout << s[i] << "," <<"\n";
                // valid characters check done
                if ( (s[i] == '(') || (s[i] == '{') || (s[i] == '[') )
                {
                    // if start of brace then we need to look for the closing brace till the end
                    if ( check_if_closing_brace_is_found_till_end(s[i], i, s) )
                    {
                        // erase the closing bracket element 
                        erase(s, i+1);
                    }
                    else{
                        ans = false;
                        break;
                    }

                }
                else
                {
                    // closing brace is found 
                    // nothing to do actually 
                }
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};


int main(void)
{

    // {[()]}
    Solution mySln;
    // mySln.isValid("[]"); ()[]{}
    // if(mySln.isValid("()"))
    if(mySln.isValid("()[]{}"))
    {
        cout << "true" << "\n";
    }


    return 0;
}
