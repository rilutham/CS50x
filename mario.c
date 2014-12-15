/**
 * Problem Set 1 - C 
 *
 * Riky Lutfi Hamzah
 * rilutham@gmail.com
 * http://rikylutfihamzah.com
 * This program is one of problem set in CS50x Harvard Course.
 * Taking input for half-pyramid height and create blocks using hashes (#).
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int height, p, q, r;

    // Taking input for half-pyramid height.
    int user_input()
    {
        do 
        {
            printf("Enter the height between 0 and 23: ");
            scanf("%d", &height );
        } 
        while (height < 0 || height > 23); 
    }

    // Invoke user_input function.
    user_input();

    // Create half-pyramid blocks using hashes (#).
    for(p = 1; p < height + 1; p++)
    {
        for(q = 0; q < height-p; q++)
        {
            printf(" ");
        }     
        for(r = 0; r < p+1; r++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
