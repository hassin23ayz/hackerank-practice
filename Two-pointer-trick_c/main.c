// 2 pointer technique is a good one to iterate over ascending arrays 
// https://youtu.be/-gjxg6Pln50


// given 2 arrays , find the 2 elements of which sum is equal to a particular value 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[] = {4, 5 , 7, 9, 1, 2 ,0};
int b[] = {5, 3 , 9, 8, 0, 2 ,7};

// find 8+7 = 15 


// void make_arr_ascen(int* arr, int* bckt)
// {

// }

void analyze_array_sizes(void)
{
    unsigned long addr_end_a   = (&a+1);
    unsigned long addr_start_a = &a;
    unsigned long addr_diff    = addr_end_a - addr_start_a;

    printf(" addr_start_a : &a   %lu \n\r", addr_start_a); 
    printf(" addr_end_a   : &a+1 %lu \n\r", addr_end_a  );
    printf(" diff (&a+1)-&a is   %lu \n\r", addr_diff   );

    printf(" no of elements in the array is : %u \n\r", addr_diff / sizeof(int) );
}



int main(int argc, char const *argv[])
{
    analyze_array_sizes();
    return 0;
}