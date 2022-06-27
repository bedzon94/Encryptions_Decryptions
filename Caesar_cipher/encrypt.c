#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

int main (int argc, char *argv[])
{
	// check for command line argument
	if (argc == 2)
	{
		// convert key to int
		int key = atoi(argv[1]);
		// store key validity
		bool valid_key = false;

		// check validity of the key
		for (int i = 0; i <strlen(argv[1]); i++)
		{
			if (isdigit(argv[1][i]))
			{
				valid_key = true;
			}
			// display usuage and terminate the program
			else
			{
				printf("Usage ./encrypt key\n");
				return 1;
			}
		}

		// check for upper and lower case and apply formula
		if (valid_key == true)
		{
			char input[500];
			printf("plaintext: ");
			fgets(input, sizeof(input), stdin);

			for (int i = 0; i <strlen(input); i++)
			{
				if (isupper(input[i]))
				{
					input[i] = ((input[i] - 65 + key) % 26) + 65;
				}
				else if (islower(input[i]))
				{
					input[i] = ((input[i] - 97 + key) % 26) + 97;
				}
			}
			printf("ciphertext: %s", input);
		}


	}
	// display usuage and terminate the program

	else
	{
		printf("Usage ./encrypt key\n");
		return 1;
	}
}