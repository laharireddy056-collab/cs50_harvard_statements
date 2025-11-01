#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // take input
    int height;
    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 1 || height > 8);

    // overall height
    for (int i = 0; i < height; i++)
    {
        // for individual rows
        for (int j = 1; j <= height; j++)
        {
            if (j < (height - i))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
