#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
 * scanf exits when user presses Enter
 * parses until space is got  
 */

int main() 
{
    /* charcater input */
    char ch;
    scanf("%c", &ch);
    
    /* string input */
    char inStr[128];
    scanf("%s", inStr);

    // after last scanf read the newline is still in memory 
    // So forcefully read the last input new line
    // so that next block does not falsify / get tricked
    scanf("\n");

    /* Line input */
    char inLn[128];
    scanf("%[^\n]%*c", inLn);

    // print the results 
    printf("%c\n\r", ch);
    printf("%s\n\r", inStr);
    printf("%s\n\r", inLn);

    return 0;
}