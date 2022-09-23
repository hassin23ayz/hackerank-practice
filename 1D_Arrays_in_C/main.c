#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n = 0;
    int tmp;
    scanf("%d", &n);

    // printf("you have input %d", n);

    if( (n >= 1) && (n<= 1000) )
    {
        // printf("valid \n\r");
        int* pArr = (int*) calloc(n , sizeof(int));
        
        for(int i=0; i<n; i++)
        {
            // printf("input-no %d", i);
            scanf("%d", &tmp);
            if( (tmp >= 1) && (tmp <= 1000) )
            {
                pArr[i] = tmp;
            }
        }

        int64_t sum = 0;
        for(int i=0; i<n; i++){
            sum += pArr[i];
        }

        printf("%lld", sum);        
    }
    return 0;
}