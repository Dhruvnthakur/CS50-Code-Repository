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
    float index = 0;
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
        else
        {
            t++;
        }
    }
    L = ((t)/(sp))*100.0 ;
    S = ((fs)/(sp))*100.0 ;
    index = (0.0588 * L)- (0.296 * S) - 15.8 ;
    if(index < 1.0)
    {
        printf("Before Grade 1\n");
    }
    else if(index >= 1.0 && index < 1.9)
    {
        printf("Grade 1\n");
    }
    else if(index >= 1.9 && index < 2.9)
    {
        printf("Grade 2\n");
    }
    else if(index >= 2.9 && index < 3.9)
    {
        printf("Grade 3\n");
    }
    else if(index >= 3.9 && index < 4.9)
    {
        printf("Grade 4\n");
    }
    else if(index >= 4.9 && index < 5.9)
    {
        printf("Grade 5\n");
    }
    else if(index >= 5.9 && index < 6.9)
    {
        printf("Grade 6\n");
    }
    else if(index >= 6.9 && index < 7.9)
    {
        printf("Grade 7\n");
    }
    else if(index >= 7.9 && index < 8.9)
    {
        printf("Grade 8\n");
    }
    else if(index >= 8.9 && index < 9.9)
    {
        printf("Grade 9\n");
    }
    else if(index >= 9.9 && index < 10.9)
    {
        printf("Grade 10\n");
    }
    else if(index >= 10.9 && index < 11.9)
    {
        printf("Grade 11\n");
    }
    else if(index >= 11.9 && index < 12.9)
    {
        printf("Grade 12\n");
    }
    else if(index >= 12.9 && index < 13.9)
    {
        printf("Grade 13\n");
    }
    else if(index >= 13.9 && index < 14.9)
    {
        printf("Grade 14\n");
    }
    else if(index >= 14.9 && index < 15.9)
    {
        printf("Grade 15\n");
    }
    else if(index >= 15.9 && index <= 16.0)
    {
        printf("Grade 16\n");
    }
    else if(index > 16.0)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %f\n",index);
    }
   // printf("%i\n",sp );
   // printf("%i\n",fs );
   // printf("%f\n",L );
   // printf("%f\n",S );
   // printf("%i\n",index );
}
