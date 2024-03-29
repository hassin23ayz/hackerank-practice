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


void print_arr_elems(int* arr, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        // printf("arr[%d] : %d \n\r", i, arr[i]);
        printf("%d \t", arr[i]);
    }
    printf("\n\r------------\n\r");
}


void make_arr_ascen(int* arr)
{
    printf("in %s , sizeof arr %lu \n\r", __func__ , sizeof(arr) );

    // array sz 
    unsigned long addr_end_a   = (&a+1);
    unsigned long addr_start_a = &a;
    unsigned long addr_diff    = addr_end_a - addr_start_a;

    // tmp shadow array create
    int  no_of_elems = addr_diff / sizeof(int) ;
    int* arrTmp =  (int*) calloc(no_of_elems , sizeof(int));
    memcpy(arrTmp, arr, sizeof(int)*no_of_elems  );
    // print_arr_elems(arrTmp, no_of_elems);

    int swap;

    for (int i = 0; i < no_of_elems; i++)
    {
        // iterate over the whole array from 0 position
        for (int j = i; j < no_of_elems; j++)
        {
            // iterate over the whole array from 1 position
            if(arrTmp[i] > arrTmp[j]){
                swap = arrTmp[i];
                arrTmp[i] = arrTmp[j];
                arrTmp[j] = swap;
            }
        }
    }
    // print_arr_elems(arrTmp, 7);
    memcpy(arr, arrTmp, sizeof(int)*no_of_elems);
}

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
    // analyze_array_sizes();

    print_arr_elems(a, 7);
    print_arr_elems(b, 7);

    make_arr_ascen(a);
    make_arr_ascen(b);

    print_arr_elems(a, 7);
    print_arr_elems(b, 7);


    printf("sizeof array a %lu", sizeof(a) );

    // applying 2 pointer theory to find out elements 

    int arr_sz = (sizeof(a)/sizeof(int)) ;
    int i    = 0;
    int j    = arr_sz - 1;

    int X = 15;

    // move the i pointer right -> till then end of the array 
    while( i < arr_sz)
    {
        // for a fixed position of i move the j pointer left till sum is greater than X
        while( (a[i] + b[j]) > X && j > 0 ) j--;

        // check if sum has reached the target value 
        if( a[i] + b[j] == X){
            printf(" %d + %d : %d\n\r", a[i], b[j], a[i] + b[j]);
            break;
        }
        i++; // move the i pointer till then end of the array 
    }
    return 0;
}