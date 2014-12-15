/**
 * Problem Set 1 - C 
 *
 * Riky Lutfi Hamzah
 * rilutham@gmail.com
 * http://rikylutfihamzah.com
 * This program is one of problem set in CS50x Harvard Course.
 * Taking input for user name and display greeting to user.
 */

#include <stdio.h>

int main(void)
{
	char name[20];
	printf("What is your name?\n");
	scanf("%s", name);
    printf("Hello, %s!\n", name);
}