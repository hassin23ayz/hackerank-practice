// gcc main.c -o main 

// https://www.hackerrank.com/challenges/missing-numbers/problem?isFullScreen=true
// https://stackoverflow.com/questions/2395275/how-to-navigate-through-a-vector-using-iterators-c

#include <iostream>
#include <vector>
using namespace std;


/* samples 

203 204 205 206 207 208 203 204 205 206
203 204 204 205 206 207 205 208 203 206 205 206 204

203 204 204 205 206 207 205 208 203 206 205 206 204


*/

void show_elems(vector<int>& mVect ) // pass by reference 
{
    // iterate over the vector and print the elems 
    vector<int>::iterator iV;
    for(iV = mVect.begin(); iV < mVect.end(); iV++)
    {
        cout << *iV << " ";
    }
    cout << "\n\n";
}

int main()
{
    // int arr[] = {, , , , , , , ,, };
    // int brr[] = {, , , , , , , , , , 205, 206, 204};

    vector<int> refVect = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
    vector<int> mVect   = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};

    // vector<int> refVect = {7, 2, 5, 3, 5, 3};
    // vector<int> mVect   = {7, 2, 5, 4, 6, 3, 5, 3};

    // take one elem of reference array and loop through the compare array 
    // if it is found then delete the elem from both the arrays 
    // then from the resultant array loop through it the same way and cut down duplicate elems 
    // then from resultant array , create an empty array .. loop through each elem compare it with the rest 

    show_elems(mVect);

    vector<int>::iterator R;
    vector<int>::iterator M;
    int r,m;

    
    for (r=0, R = refVect.begin(); R < refVect.end() ; R++, r++)
    {
        for( m=0, M=mVect.begin(); M < mVect.end(); M++, m++ )
        {
            cout << "comparing with " << refVect.at(r) << ":=";
            if(refVect.at(r) == mVect.at(m)) {
                // as matched so delete common elem from both the vectors 
                refVect.erase(refVect.begin() + r);
                mVect.erase(mVect.begin() + m); 
            }
            show_elems(mVect);
        }
        
    }
    
    //show_elems(refVect);
    show_elems(mVect);

    return 0;
}