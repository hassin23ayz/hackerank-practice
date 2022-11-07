#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <inttypes.h>


const int SZ = 6;


void dbg_print(uint16_t* pArr)
{
    for(int i=0; i<SZ; i++)
    {
        printf("%lu \t", pArr[i]);
    }
    printf("\n\r");
}

void sort(uint16_t* pArr)
{
    uint16_t tmp = 0;
    // take one element 
    for (int i = 0; i < SZ-1; i++)
    {
        for (int j = i+1; j < SZ; j++)
        {
            if( pArr[i] <= pArr[j])
            {
                // do nothing
            }
            else
            {
                tmp = pArr[i];
                pArr[i] = pArr[j];
                pArr[j] = tmp;
            }
        }
    }

}

int main() 
{
    uint16_t arr[] = {4,7,2,0,3,9};

    dbg_print(arr);

    sort(arr);

    dbg_print(arr);
    return 0;
}