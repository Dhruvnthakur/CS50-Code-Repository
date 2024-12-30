#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height : ");
    }
    while (n <= 0);
    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n - m; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 1; k <= n - m; k++)
        {
            printf("#");
        }
        printf("\n");
        m--;
    }
}
