// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() 
{
    // char sample[] = "Learning C is amazing";

    char sample[256];
    scanf("%[^\n]%*c", sample);
    // printf("%s\n\r", sample);


    /* strtok modifies the original string */
    char* track = strtok(sample, " ");
    while(track != NULL)
    {
        printf("%s\n", track);
        track = strtok(NULL, " ");
    }

    return 0;
}