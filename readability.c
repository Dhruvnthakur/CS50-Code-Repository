#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string t1 = get_string("Text :");
    char c1[20];

    strcpy(c1, t1);

    int t = 0; // temp variable for calculations
    float sp = 1; //number of spaces in 100 words
    int fs = 0; //number of full stops in 100 words
    float S = 0; //Is the average number of sentences per 100 words in the text
    float L = 0; //Is the average number of letters per 100 words in the text
    int index = 0;
    for(int i = 0 ; i < strlen(c1) && sp < 100 ; i++)
    {
        if(c1[i] == ' ')
        {
            sp++;
        }
        else if(c1[i] == '.' || c1[i] == '?' || c1[i] == '!')
        {
            fs++;
        }
        else
        {
            t++;
        }
    }
    L = ((t)/(sp))*100.0 ;
    S = ((fs)/(sp))*100.0 ;
    index = (0.0588 * L)- (0.296 * S) - 15.8 ;
    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",index);
    }
   // printf("%i\n",sp );
   // printf("%i\n",fs );
   // printf("%f\n",L );
   // printf("%f\n",S );
   // printf("%i\n",index );
}
