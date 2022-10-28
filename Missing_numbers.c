// gcc main.c -o main 

// https://www.hackerrank.com/challenges/missing-numbers/problem?isFullScreen=true 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* samples 

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204

*/


int main() 
{
    int arr[] = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
    int brr[] = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};


    // take one elem of reference array and loop through the compare array 
    // if it is found then delete the elem from both the arrays 
    // then from the resultant array loop through it the same way and cut down duplicate elems 
    // then from resultant array , create an empty array .. loop through each elem compare it with the rest 


    //first we need to figure out how to create a list which elem can be dynamically removed 
    


    return 0;
}