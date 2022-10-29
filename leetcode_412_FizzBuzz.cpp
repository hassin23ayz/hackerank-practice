#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

	int n;
	cout << "Input: n = ";
	cin >> n;

	vector<string> mVect;
	for (int i = 0; i < n; i++)
	{
		mVect.push_back(" ");
	}
	for (int i = 0; i < n; i++)
	{
		cout << mVect.at(i) << " "; 
	}
	cout << "\n\n";

	for(int i=0; i<n; i++)
	{
		if ( ((i%3)==0) && ((i%5)==0) )
		{
			mVect.at(i) = "FizzBuzz";
		}
		else if ((i%3)==0)
		{
			mVect.at(i) = "Fizz";	
		}
		else if ((i%5)==0)
		{
			mVect.at(i) = "Buzz";	
		}
		else
		{
			mVect.at(i) = to_string(i);
		}
	}

	mVect.erase(mVect.begin() + 0);
	vector<string>::iterator iV;

	int i;
	for (i = 0, iV = mVect.begin(); iV < mVect.end(); iV++, i++)
	{
		cout << mVect.at(i) << " "; 
	}

	return 0;
}