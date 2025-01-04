#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string t1 = get_string("Text :");
    char c1[500];
    strcpy(c1, t1);
    int t = 0; // temp variable for calculations
    int sp = 1; //number of spaces in 100 words
    int fs = 0; //number of full stops in 100 words
    for(int i = 0 ; i < strlen(c1) ; i++)
    {
        if(c1[i] == ' ')
        {
            sp++;
        }
        else if(c1[i] == '.' || c1[i] == '?' || c1[i] == '!')
        {
            fs++;
        }
        else if(isalpha(c1[i]))
        {
            t++;
        }
    }
    float L = (float)t / (float) sp * 100.0 ;
    float S = (float)fs / (float) sp * 100.0 ;
    int index = round((0.0588 * L)- (0.296 * S) - 15.8) ;
    if(index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index > 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}
