#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// takes string input
// returns till parsed 
static char* parseTillSpace(char* src, char* bckt)
{
    int i = 0;
    // can we print size of string ? 
    printf("%d \n\r", strlen(src));

    for (i = 0; i < strlen(src); i++)
    {
        if(src[i] != ' '){
            bckt[i] = src[i];
        }
        else{
            break;
        }
    }
    return &src[i];
}


int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    char* substr = malloc(1024 * (sizeof(char) ));
    
    // char* restOfStr = parseTillSpace(s, substr);


    

    

    // printf("%s\n\r", restOfStr);
    // printf("%s\n\r", substr);

    // for (int i = 0; i < (strlen(s)+1); i++)
    // {   
    //     if(s[i] != ' '){
    //         printf("%c", s[i]);
    //     }
    //     else{
    //         printf("\n\r");
    //     }
    // }


    return 0;
}