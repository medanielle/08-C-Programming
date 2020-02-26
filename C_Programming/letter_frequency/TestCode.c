#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/*
 * The function letterFrequency takes as input a one-line strings
 * and determines the total occurrences of each letter of the alphabet in the line.
 *
 * Case sensitivity is not an issue i.e. "A" and "a" are the considered the same for this question
 * If a non-alpha character is encountered it should be ignored, adding nothing to any count.
 *
 * @param sentence			The input string to process
 * @param frequencyTable	An already allocated buffer in which to place the output
 *
 * Expected Return Values:
 *		- The task is successful: 1
 *		- Bad input is provided: 0
 */

int letterFrequency(char* sentence, int* frequencyTable)
{
	int lower[26] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i','j', 'k', 'l','m', 'n', 'o','p', 'q', 'r','s', 't', 'u','v', 'w', 'x','y', 'z'};
	int upper[26] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I','J', 'K', 'L','M', 'N', 'O','P', 'Q', 'R','S', 'T', 'U','V', 'W', 'X','Y', 'Z'};
	int i = 0;
	while (sentence[i] != '\0')
	{
		for (int j = 0; j < 26; j++)
		{
			if (sentence[i] == lower[j] || sentence[i] == lower[j]){
				frequencyTable[j] += 1;
			}
		}
		i++;
	}
	return 1;
}

int main(){
	int frequencyTable[26] = { 0 };
	letterFrequency("abc", frequencyTable);
	for (int i = 0; i < 26; i++){
		printf("%d, ", frequencyTable[i]);
	}
}
