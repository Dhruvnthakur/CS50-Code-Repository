#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cash;
    do
    {
        cash = get_int("Change owed :");
    }
    while (cash < 0);
    int count = 0;
    while(cash >= 25)
    {
        count++;
        cash = cash-25;
    }
    while(cash >= 10)
    {
        count++;
        cash = cash-10;
    }
    while(cash >= 5)
    {
        count++;
        cash = cash-5;
    }
    while(cash >= 1)
    {
        count++;
        cash = cash-1;
    }
    printf("%i\n",count);
}
