#include "main.h"



/**

 * rot13 - encodes a string using rot13

 * @str: string

 * Return: pointer to string

 */

int *rot13(va_list ls)

{

	int i, j, count = 0;



	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',

'G', 'H', 'I', 'J', 'K', 'L',

'M', 'N', 'O', 'P', 'Q', 'R',

'S', 'T', 'U', 'V', 'W', 'X',

'Y', 'Z', 'a', 'b', 'c', 'd',

'e', 'f', 'g', 'h', 'i', 'j',

'k', 'l', 'm', 'n', 'o', 'p',

'q', 'r', 's', 't', 'u', 'v',

'w', 'x', 'y', 'z'};



	char encoding[52] = {'N', 'O', 'P', 'Q', 'R', 'S',

'T', 'U', 'V', 'W', 'X', 'Y',

'Z', 'A', 'B', 'C', 'D', 'E',

'F', 'G', 'H', 'I', 'J', 'K',

'L', 'M', 'n', 'o', 'p', 'q',

'r', 's', 't', 'u', 'v', 'w',

'x', 'y', 'z', 'a', 'b', 'c',

'd', 'e', 'f', 'g', 'h', 'i',

'j', 'k', 'l', 'm'};



	for (i = 0; str[i] != '\0'; i++)

		for (j = 0; j < 52; j++)

		{

			if (str[i] == alphabet[j])

			{

				str[i] = encoding[j];

				break;

			}
			write (1, &str[i], 1);
			count += 1;

		}

	return (count);

}
