// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void extractNumeric(char* src, char* bckt)
{
    int sz = strlen(src);

    for(int i=0; i<sz; i++)
    {
        //printf("%c  ", (char)src[i]);
        if (((char)src[i] >= '0') && ((char)src[i] <= '9'))
        {
            *(bckt++) = (char)src[i];
            //printf("[%c]", (char)src[i]);
        }
    }
}

void get_occurance_freq(char* src, int* arrFreq)
{
    int sz = strlen(src);

    for(int i=0; i<sz; i++)
    {
        switch (src[i])
        {
            case '0': arrFreq[0]++; break;
            case '1': arrFreq[1]++; break;
            case '2': arrFreq[2]++; break;
            case '3': arrFreq[3]++; break;
            case '4': arrFreq[4]++; break;
            case '5': arrFreq[5]++; break;
            case '6': arrFreq[6]++; break;
            case '7': arrFreq[7]++; break;
            case '8': arrFreq[8]++; break;
            case '9': arrFreq[9]++; break;
            default : break;
        }//switch
    }
}


int main() 
{
    //take a string input using scanf 
    // char sample[] = "a11472o5t6";
    char sample[128];
    scanf("%s", sample);
    //create a string to keep numeric charcaters
    char numStr[128];

    //parse the numeric portion
    extractNumeric(sample, numStr);
    // printf("%s", numStr);

    //create an array of size 10 to keep count of 0..9 occurance 
    int occur[10];
    memset(occur, 0, sizeof(occur));

    //iterate over the numeric string , pass it through a switch and increment index 
    get_occurance_freq(numStr, occur);

    for(int i=0; i<10; i++)
    {
        printf("%d ", occur[i]);
    }

    return 0;
}