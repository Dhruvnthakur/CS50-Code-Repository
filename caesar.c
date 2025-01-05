#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int key(int n);
char *ciphertext(char arr[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("key :");
    }
    while (n < 0);

    string t = get_string("plaintext:");
    char pt[100];
    strcpy(pt, t);

    char M1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char M2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < strlen(pt); i++)
    {
        for (int j = 0; j < strlen(M1); j++)
        {
            int m = j + n;
            while (m > 25)
            {
                m = m - 26;
            }

            if (pt[i] == M1[j])
            {
                pt[i] = M1[m];
                break;
            }

            else if (pt[i] == M2[j])
            {
                pt[i] = M2[m];
                break;
            }
        }
    }
    printf("ciphertext:%s\n", pt);
}
