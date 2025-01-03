#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


char* upper(char arr[]);
int Tally(char ar[]);

int main(void)
{
    string p1 = get_string("Player 1:");
    string p2 = get_string("Player 2:");
    char c1[20] ;
    char c2[20] ;

    strcpy(c1,p1);
    strcpy(c2,p2);

    upper(c1);
    upper(c2);

    int s1 = Tally(c1);
    int s2= Tally(c2);

    if(s1>s2)
    {
        printf("Player 1 Wins!\n");
    }
    else if(s1<s2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

char* upper(char arr[])
{
    for(int i=0 ; i < strlen(arr) ; i++)
    {
        arr[i] = toupper(arr[i]);
    }
    return arr ;
}

int Tally(char ar[])
{
    char M1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int S[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int T=0;
    for(int j=0 ; j < strlen(ar) ; j++)
    {
        for(int a=0 ; a <= strlen(M1) ; a++)
        {
            if(M1[a] == ar[j])
            {
                T += S[a];
            }
        }

    }
    return T;
}

