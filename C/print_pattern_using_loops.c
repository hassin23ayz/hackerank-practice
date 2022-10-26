// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print_recurse(int n, int array[n][n])
{
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<n; x++)
        {
            if((y == 0) || (y == (n-1)))
            {
                // printf("%d", n);
                array[x][y] = n;
            }
            else
            {
                if((x == 0) || (x == (n-1)))
                {
                    array[x][y] = n;
                }
                else
                {
                    n = n-1;
                    if(n == 0)
                    {
                        return;
                    }
                    else
                    {
                        print_recurse(n, array);    
                    }
                }
            }
        }
        // printf("\n");
    }    
}


int main() 
{

    // int n;
    // scanf("%d", &n);

    int array[7][7];

    print_recurse(n, array);

    for(int y=0; y<n; y++)
    {
        for(int x=0; x<n; x++)
        {
            printf("%d", array[x][y]);
        }
        printf("\n");
    }

    return 0;
}