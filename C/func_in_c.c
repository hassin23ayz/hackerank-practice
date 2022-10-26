// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max_of_two(int m, int n)
{
    int result = m;
    if(m > n)
    {
        result = m;
    }
    else if(n > m)
    {
        result = n;
    }
    else
    {
        //equal;
    }
    return result;
}


int max_of_four(int a,
                int b,
                int c,
                int d)
{
    int maxNum = a;

    int nums[4];
    nums[0] = a;
    nums[1] = b;
    nums[2] = c;
    nums[3] = d;    

    for(int i=0; i<4; i++)
    {
        maxNum = max_of_two(maxNum, nums[i]);
    }

    return maxNum;
}

int main() 
{
    int a,b,c,d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    

    printf("%d", max_of_four(a,b,c,d) );

    return 0;
}